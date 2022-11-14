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
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
struct Node *create(struct Node *head)
{
    char ch;
    struct Node *ptr, *New;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter First Node Value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    head = New;
    ptr = head;
    printf("Do you want to insert another node?\n(Y/N): ");
    scanf("%c", &ch);
    fflush(stdin);
    while (ch == 'y' || ch == 'Y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter Node Value: ");
        scanf("%d", &New->data);
        fflush(stdin);
        New->next = NULL;
        ptr->next = New;
        ptr = ptr->next;
        printf("Do you want to insert another node?\n(Y/N): ");
        scanf("%c", &ch);
    }
    return (head);
}
int main(void)
{
    struct Node *head1 = NULL, *head2 = NULL, *ptr1, *ptr2;
    printf("Create 1st Linked List--->\n");
    head1 = create(head1);
    printf("Create 2nd Linked List--->\n");
    head2 = create(head2);
    printf("First Linked List: ");
    display(head1);
    printf("\n");
    printf("Second Linked List: ");
    display(head2);
    printf("\n");
    printf("The Intersection of the Two Linked Lists: ");
    ptr1 = head1;
    ptr2 = head2;
    while (ptr1 != NULL)
    {
        if (ptr2 == NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = head2;
        }
        else if (ptr1->data == ptr2->data)
        {
            printf("%d  ", ptr1->data);
            ptr1 = ptr1->next;
            ptr2 = head2;
        }
        else
        {
            ptr2 = ptr2->next;
        }
    }

    return 0;
}