#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *Head;
    struct Node *New;
    struct Node *ptr, *ptr2;
    int temp;
    char choice;
    Head = NULL;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter a value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    Head = New;
    ptr = Head;
    printf("\nDo you want to add another Node?\n\n(Y/N): ");
    scanf("%c", &choice);
    while (choice == 'Y' || choice == 'y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a value: ");
        scanf("%d", &New->data);
        fflush(stdin);
        New->next = NULL;
        ptr->next = New;
        ptr = ptr->next;
        printf("\nDo you want to add another Node?\n\n(Y/N): ");
        scanf("%c", &choice);
    }
    ptr = Head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    // printf("\nNumber of Nodes: %d", count);
    ptr = Head;
    ptr2 = Head->next;
    while (ptr != NULL)
    {
        while (ptr2 != NULL)
        {
            if (ptr->data > ptr2->data)
            {
                temp = ptr->data;
                ptr->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
    // temp = ptr->data;
    // ptr->data = ptr2->data;
    // ptr2->data = temp;
    // ptr = Head;
    while (ptr != NULL)
    {
        count++;
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}