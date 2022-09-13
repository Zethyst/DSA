#include <stdio.h>
void sort_Mat();
int main (void){
int mat[100][100],m,n,r1,r2;
printf("Enter the number of rows of the matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the matrix: ");
scanf("%d",&n);
printf("Enter the elements in the matrix: \n");
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d",&mat[i][j]);
printf("\nBEFORE SORTING ROWS\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d  ",mat[i][j]);
    }
    printf("\n");
}
sort_Mat(mat,m,n);
printf("\nAFTER SORTING ROWS\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d  ",mat[i][j]);
    }
    printf("\n");
}

return 0;
}
void sort_Mat(int mat[100][100],int m,int n){
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        for (int k = j+1; k < n ; k++)
        {
            if(mat[i][j]>mat[i][k]){
                int temp=mat[i][j];
                mat[i][j]=mat[i][k];
                mat[i][k]=temp;
            }
        }
    }
}
}