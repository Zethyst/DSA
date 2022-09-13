#include <stdio.h>
void add();
int main (void){
int mat1[100][100],mat2[100][100],m,n;
printf("Enter the size of the 1st matrix: ");
scanf("%d",&m);
printf("Enter the size of the 2nd matrix: ");
scanf("%d",&n);
printf("Enter the elements in the 1st matrix: ");
for (int i = 0; i < m; i++)
for (int j = 0; j < m; j++)
scanf("%d",&mat1[i][j]);

printf("Enter the elements in the 2nd matrix: ");
for (int i = 0; i < n; i++)
for(int j = 0; j < n; j++)
scanf("%d",&mat2[i][j]);

printf("\n\nElements in the 1st matrix are:\n");
for (int i = 0; i < m; i++){
for (int j = 0; j < m; j++)
printf("%d  ",mat1[i][j]);
printf("\n");
}
printf("\n\nElements in the 2nd matrix are:\n");
for (int i = 0; i < n; i++){
for(int j = 0; j < n; j++)
printf("%d  ",mat2[i][j]);
printf("\n");
}
add(mat1,mat2,m,n);
return 0;
}
void add(int mat1[100][100],int mat2[100][100],int m,int n){
    int sum[100][100];
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < m; j++)
        {

                sum[i][j]=sum[i][j]+(mat1[i][j]+mat2[i][j]);
        }
        }
    
    printf("\n\nTHE SUM OF TWO MATRICES:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}