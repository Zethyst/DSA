// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    char Data;
    struct Node *next;
};
struct Node *Head, *ptr, *New;
void display(struct Node *head)
{
    ptr = head;
    while (ptr != NULL)
    {
        printf("%c -> ", ptr->Data);
        ptr = ptr->next;
    }
    printf("NULL");
}
int main(void)
{
    int n;
    char ch;
    printf("\nHow many Node?\nEnter: ");
    scanf("%d", &n);
    struct Node *Vert[n];
    printf("\nEnter the Nodes present in the graph:");
    for (int i = 0; i < n; i++)
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the Data of Node %d: ", i + 1);
        scanf(" %c", &New->Data);
        fflush(stdin);
        New->next = NULL;
        Vert[i] = New;
    }
    for (int i = 0; i < n; i++)
    {
        ptr = Vert[i];
        printf("\nIs there a connection of %c?\n(Y/N): ", ptr->Data);
        scanf(" %c", &ch);
        while (ch == 'Y' || ch == 'y')
        {
            New = (struct Node *)malloc(sizeof(struct Node));
            printf("\nEnter the Value of this Node: ");
            scanf(" %c", &New->Data);
            fflush(stdin);
            New->next = NULL;
            ptr->next = New;
            ptr = ptr->next;
            printf("\nIs there a connection of %c?\n(Y/N): ", ptr->Data);
            scanf(" %c", &ch);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        display(Vert[i]);
        printf("\n");
    }

    return 0;
}
// END OF LINE