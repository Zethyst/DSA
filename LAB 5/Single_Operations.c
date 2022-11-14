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
    while (ptr!=NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
void insert_first(struct Node **head)
{
    struct Node *PTR;
    PTR = *head;
    struct Node *New = (struct Node *)malloc(sizeof(struct Node));
    printf("\n\nEnter the value to be inserted at first postion: ");
    scanf("%d", &New->data);
    New->next = *head;
    *head = New;
}
void delete_first(struct Node **head){
    struct Node *PTR,*TEMP;
    TEMP=*head;
    PTR = *head;
    PTR=PTR->next;
    *head=PTR;
    free(TEMP);
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
    }
    traversal(&head);
    insert_first(&head);
    printf("\nNow The Modified LINKED LIST: \n");
    traversal(&head);
    delete_first(&head);
    printf("\nNow The Modified LINKED LIST after deleting first node: \n");
    traversal(&head);

    return 0;
}