#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    printf("The Linked List: ");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
struct Node *insert_at_end(struct Node *Head, int data)
{
    struct Node *New;
    struct Node *ptr=Head;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->data = data;
    New->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = New;
    return (Head);
}

struct Node *delete_at_end(struct Node *head)
{
    struct Node *ptr, *TEMP;
    ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    TEMP = ptr->next;
    ptr->next = NULL;
    free(TEMP);
    return (head);
}
int main(void)
{
    struct Node *head=NULL, *ptr, *new;
    char ch;
    int item;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &item);
    new->data=item;
    new->next = NULL;
    head = new;
    ptr = head;
    printf("\nDo you want to add another Node?\n\n(Y/N): ");
    scanf(" %c", &ch);

    while (ch == 'Y' || ch == 'y')
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a value: ");
        scanf("%d", &new->data);
        fflush(stdin);
        new->next = NULL;
        ptr->next = new;
        ptr = ptr->next;
        printf("\nDo you want to add another Node?\n\n(Y/N): ");
        scanf(" %c", &ch);
    }
    display(head);
    printf("\nEnter the Value to Insert at End: ");
    scanf("%d", &item);
    insert_at_end(head, item);
    printf("\nNow The Modified LINKED LIST: \n");
    display(head);
    delete_at_end(head);
    printf("\nNow The Modified LINKED LIST after deleting last node: \n");
    display(head);

    return 0;
}