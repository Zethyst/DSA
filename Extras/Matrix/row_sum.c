#include <stdio.h>
int main (void){
int mat[100][100],m,n,sumrow=0,sumcol=0;
printf("Enter the number of rows of the matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the matrix: ");
scanf("%d",&n);
printf("Enter the elements in the matrix: \n");
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d",&mat[i][j]);
for (int i = 0; i <= m; i++)
{
    sumrow=0;
    for (int j = 0; j <= n; j++)
    {
        sumrow+=mat[i][j];
    }
    mat[i][n]=sumrow;
}

for (int i = 0; i <= m; i++)
{
    sumcol=0;
    for (int j = 0; j <= n; j++)
    {
        sumcol+=mat[j][i];
    }
    mat[m][i]=sumcol;
}
printf("\n\nTHE MATRIX\n");
for (int i = 0; i <= m; i++)
{
    for (int j = 0; j <=n; j++)
    {
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
}

return 0;
}