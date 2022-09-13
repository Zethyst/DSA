#include <stdio.h>
int main (void){
    int mat[100][100],n,k=1;
    printf("Enter the size of the Square Matrix: ");
    scanf("%d",&n);
    int row1=0;
    int col1=0;
    int row2=n-1;
    int col2=n-1;
    do{
    for (int i = col1; i <= col2; i++)
    {
        mat[row1][i]=k;
        k++;
    }
    for (int i = row1+1; i <= row2; i++)
    {
        mat[i][col2]=k;
        k++;
    }
    for (int i = col2-1; i >= col1; i--)
    {
        mat[row2][i]=k;
        k++;
    }
    for (int i = row2-1; i >= row1+1; i--)
    {
        mat[i][col1]=k;
        k++;
    }
    row1++;
    row2--;
    col1++;
    col2--;
    }
    while(k<=n*n);
    
    printf("\nTHE SPIRAL MATRIX\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

return 0;
}