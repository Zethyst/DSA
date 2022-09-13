#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr->next != head)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Element is : %d\n", ptr->data);
    ptr = ptr->next;
    printf("Element is : %d\n", ptr->data);
}
// struct Node *InsertAtFirst(struct Node *head,value)
// {

// }
int main(void)
{
    struct Node *head, *second, *third, *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    printf("Enter first node value: ");
    scanf("%d",&head->data);
    head->next = second;

    // Link second and third nodes
    printf("Enter second node value: ");
    scanf("%d",&second->data);
    second->next = third;

    // Link third and fourth nodes
    printf("Enter third node value: ");
    scanf("%d",&third->data);
    third->next = fourth;

    // Terminate the list at the third node
    printf("Enter fourth node value: ");
    scanf("%d",&fourth->data);
    fourth->next = head;

    traversal(head);
    return 0;
}