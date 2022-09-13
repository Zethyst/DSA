#include <stdio.h>
int main (void){
int mat[100][100],m,n,sumdiag1=0,sumdiag2=0;
printf("Enter the number of rows of the matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the matrix: ");
scanf("%d",&n);
printf("Enter the elements in the matrix: \n");
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d",&mat[i][j]);
printf("\n\nTHE MATRIX\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
}
for (int i = 0; i <= m; i++)
{
        sumdiag1+=mat[i][i];
}
printf("\n\nThe Sum of left diagonal: %d",sumdiag1);
int j=n-1;
for (int i = 0; i <= m; i++)
{
        sumdiag2+=mat[i][j];
        j--;
}
printf("\n\nThe Sum of right diagonal: %d",sumdiag2);

return 0;
}