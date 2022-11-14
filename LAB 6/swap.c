#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *head)
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
int main(void)
{
    char ch;
    struct Node *head, *ptr, *New;
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
    printf("\n");
    ptr = head;
    print(head);
    struct Node *ptr1, *ptr2, *ptr3;
    int t;
    ptr1 = head;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    do
    {
        t = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = t;

        ptr1 = ptr1->next->next;
        ptr2 = ptr2->next->next;
    } while (ptr1->next != NULL && ptr2->next != NULL);
    if (ptr1->next == NULL)
    {
        printf("\nLinked List after swapping: \n");
        print(head);
    }
    else if (ptr2->next == NULL)
    {
        t = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = t;
        printf("\nLinked List after swapping: \n");
        print(head);
    }

    return 0;
}