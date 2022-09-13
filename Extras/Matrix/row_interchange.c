#include <stdio.h>
void exchange();
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
printf("\nEnter which row you want to interchange with which one: \n");
scanf("%d%d",&r1,&r2);
printf("\nExchanging row %d with %d\n",r1,r2);
printf("\nBefore Interchange\n");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d  ",mat[i][j]);
    }
    printf("\n");
}
exchange(mat,m,n,r1,r2); //Interchanging 1st and 4th row
printf("\nAfter Interchange\n");
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
void exchange(int mat[100][100],int m,int n,int r1,int r2){
    for (int i = 0; i < m; i++)
    {
            r1--;r2--;
            int temp=mat[r1][i];
            mat[r1][i]=mat[r2][i];
            mat[r2][i]=temp;
        }
        
    }