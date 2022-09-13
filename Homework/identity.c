#include <stdio.h>
void check();
int main (void){
int mat1[100][100],m;
printf("Enter the order of the matrix: ");
scanf("%d",&m);
printf("Enter the elements in the matrix: ");
for (int i = 0; i < m; i++)
for (int j = 0; j < m; j++){
printf("Mat[%d][%d] => ",i,j);
scanf("%d",&mat1[i][j]);
}

printf("\n\nThe Matrix:\n");
for (int i = 0; i < m; i++){
for (int j = 0; j < m; j++)
printf("%d  ",mat1[i][j]);
printf("\n");
}
check(mat1,m);
return 0;
}
void check(int mat1[100][100],int m){
    int flag=1;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==j && mat1[i][j]!=1)
            {
                flag=0;
                break;
            }
            else if(i!=j && mat1[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
        }
    if(flag==1)
    printf("Matrix is an Identity Matrix");
    else
    printf("Matrix is NOT an Identity Matrix");
}
