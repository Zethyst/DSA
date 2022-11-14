// PROGRAMED BY AKSHAT JAISWAL

#include <stdio.h>

void buildtree(int arr[], int index, int value)
{
    int data;
    char ch;
    arr[index] = value;
    printf("\nDo you want to add Left child of %d?\n(Y/N): ", value);
    scanf("%c", &ch);
    fflush(stdin);
    if (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter left child: ");
        scanf("%d", &data);
        fflush(stdin);
        buildtree(arr, 2 * index + 1, data);
    }
    printf("\nDo you want to add Right child of %d?\n(Y/N): ", value);
    scanf("%c", &ch);
    fflush(stdin);
    if (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter the Right child: ");
        scanf("%d", &data);
        fflush(stdin);
        buildtree(arr, 2 * index + 2, data);
    }
}
void traversal(int t[])
{
    for (int i = 0; i < 8; i++)
    {
        if (t[i] == -1)
            printf("- ");
        else
        {
            printf("%d ", t[i]);
        }
    }
}
void Node(int t[])
{
    printf("ROOT ");
    int i = 1;
    int j = 2;
    while (i < 8 && j < 8)
    {
        if (i % 2 != 0)
        {
            printf("LC ");
        }
        i = 2 * i + 1;
        if (j % 2 == 0)
        {
            printf("RC ");
        }
        j = 2 * j + 2;
    }
}
int main(void)
{
    int arr[8];
    int value;
    for (int i = 0; i < 8; i++)
    {
        arr[i] = -1;
    }
    printf("\nEnter the value of root Node: \n");
    scanf("%d", &value);
    fflush(stdin);
    buildtree(arr, 0, value);
    Node(arr);
    printf("\n");
    traversal(arr);

    return 0;
}
//END OF LINE