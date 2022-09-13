#include <stdio.h>
void product();
int main (void){
int mat1[100][100],mat2[100][100],m,n,p,q;
printf("Enter the number of rows of the 1st matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the 1st matrix: ");
scanf("%d",&n);
printf("Enter the number of rows of the 2nd matrix: ");
scanf("%d",&p);
printf("Enter the number of columns of the 2nd matrix: ");
scanf("%d",&q);
printf("Enter the elements in the 1st matrix: ");
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);

printf("Enter the elements in the 2nd matrix: ");
for (int i = 0; i < p; i++)
for(int j = 0; j < q; j++)
scanf("%d",&mat2[i][j]);

printf("\nElements in the 1st matrix are:\n");
for (int i = 0; i < m; i++){
for (int j = 0; j < n; j++)
printf("%d  ",mat1[i][j]);
printf("\n");
}
printf("\nElements in the 2nd matrix are:\n");
for (int i = 0; i < p; i++){
for(int j = 0; j < q; j++)
printf("%d  ",mat2[i][j]);
printf("\n");
}
product(mat1,mat2,m,n,p,q);
return 0;
}
void product(int mat1[100][100],int mat2[100][100],int m,int n,int p,int q){
    int mul[100][100];
    int size=m;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < q; j++)
        {
            mul[i][j]=0;
            for (int k = 0; k < p; k++)
            {
                mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("THE PRODUCT OF TWO MATRICES:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
}