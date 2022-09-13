#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node **head)
{
    struct Node *ptr;
    ptr = *head;
    printf("The Linked List: ");
    while (ptr->next != *head)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    };
    printf("%d  ", ptr->data);
    ptr = ptr->next;
    printf("%d  ", ptr->data);
}

void insert_last(struct node **head)
{
    struct Node *New,*PTR;
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the value you want to insert at last place: ");
    scanf("%d",&New->data);
    PTR=*head;
    while (PTR->next!=*head)
    {
        PTR=PTR->next;
    }
    PTR->next=New;
    New->next=*head;
}
int main(void)
{
    struct Node *head, *ptr, *new;
    char choice;

    // Allocate memory for nodes in the linked list in Heap
    new = (struct Node *)malloc(sizeof(struct Node));
    head = NULL;
    // Link first and second nodes
    printf("Enter first node value: ");
    scanf("%d", &new->data);
    fflush(stdin);
    new->next = NULL;
    head = new;
    ptr = head;
    printf("\nDo you want to add another Node?\n\n(Y/N): ");
    scanf("%c", &choice);

    while (choice == 'Y' || choice == 'y')
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a value: ");
        scanf("%d", &new->data);
        fflush(stdin);
        new->next = NULL;
        ptr->next = new;
        ptr = ptr->next;
        printf("\nDo you want to add another Node?\n\n(Y/N): ");
        scanf("%c", &choice);
        if (choice == 'N' || choice == 'n')
            ptr->next = head;
    }
    traversal(&head);
    insert_last(&head);
    printf("\nNow The Modified LINKED LIST: \n");
    traversal(&head);

    return 0;
}