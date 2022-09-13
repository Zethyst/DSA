#include <stdio.h>
void store();
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
store(mat1,m);
return 0;
}
void store(int mat1[100][100],int m){
    int mat2[100][100], row=0;
    for (int i = 0; i < m ; i++)
    {
        row=0;
        for (int j = 0; j < m; j++)
        {
           mat2[row][i]=mat1[i][j];
           row++;
        }
    }
printf("\n\nThe Transpose Matrix:\n");
for (int i = 0; i < m; i++){
for (int j = 0; j < m; j++)
printf("%d  ",mat2[i][j]);
printf("\n");
}
}