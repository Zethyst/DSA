#include <stdio.h>
int main (void)
{
int mat1[100][100],m,n,count=0,y=0;
printf("Enter the number of rows of the 1st matrix: ");
scanf("%d",&m);
printf("Enter the number of columns of the 1st matrix: ");
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
for (int j = 0; j < n; j++)
    if((mat1[i][j]) != 0)
    count++;
int T1[count][3];
printf("Triplet form: \n");
printf("row\tcol\tvalue\n");
T1[0][0]=m;
T1[0][1]=n;
T1[0][2]=count;;

y=1;
for (int i = 0; i < m; i++)
{
for (int j = 0; j < n; j++)
{
    if((mat1[i][j]) != 0)
    {
    T1[y][0]=i;
    T1[y][1]=j;
    T1[y][2]=mat1[i][j];
    y++;
    // break;
    }
}
}
for (int i = 0; i < count; i++){
for (int j = 0; j < 3; j++)
printf("%d\t",T1[i][j]);
printf("\n");
}
return 0;
}