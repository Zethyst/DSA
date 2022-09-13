#include <stdio.h>
int main (void)
{
int mat1[100][100],m,n,count1=0,count2=0;
printf("Enter the number of rows of the matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the matrix: ");
scanf("%d",&n);
printf("Enter the elements in the matrix: ");
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
scanf("%d",&mat1[i][j]);

printf("\nElements in the matrix are:\n");
for (int i = 0; i < m; i++){
for (int j = 0; j < n; j++)
printf("%d  ",mat1[i][j]);
printf("\n");
}
for (int i = 0; i < m; i++)
{
for (int j = 0; j < n; j++)
{
if(i>j && mat1[i][j]==0)
    count1++;
else if(j>i && mat1[i][j]==0)
    count2++;
}
}
if(count1>count2)
printf("\nMatrix is in Lower Triangular Form!");
else if(count2>count1)
printf("\nMatrix is in Upper Triangular Form!");


return 0;
}
