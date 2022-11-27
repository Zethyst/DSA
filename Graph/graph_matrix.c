// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;
    char ch;
    printf("\nHow many Node?\nEnter: ");
    scanf("%d", &n);
    char arr[n];
    int Mat[n][n];
    printf("\nEnter the Nodes present in the graph:");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nDoes an edge exist between %c and %c?\n(Y/N): ", arr[i], arr[j]);
            scanf(" %c", &ch);
            if (ch == 'Y' || ch == 'y')
            {
                Mat[i][j] = 1;
                count++;
            }
            else
                Mat[i][j] = 0;
        }
    }
    printf("\nThe Respective Adjacency Matrix => \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal Number of Edges: %d", count/2);

    return 0;
}
// END OF LINE