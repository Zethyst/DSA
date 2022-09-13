#include <stdio.h>
#include <stdlib.h>

int main (void){
int mat[100][100],m,n,r1,r2;
printf("Enter the number of rows of the matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the matrix: ");
scanf("%d",&n);

// int **arr;
// int len=sizeof(int*)*m+sizeof(int)*m*n;
// arr=sizeof(int*)*(len);
int *arr=(int*)malloc((m*n)*sizeof(int));
printf("Enter elements in the %dx%d matrix: ",m,n);
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",(arr+i*n+j));
    }
}
printf("\nTHE MATRIX\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d\t",*(arr+i*n+j));
    }
    printf("\n");
}

return 0;

}
