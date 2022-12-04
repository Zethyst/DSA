#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *create(struct Node *head)
{
    struct Node *New, *PTR;
    char ch;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter a value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    head = New;
    PTR = head;
    printf("\nDo you want to create another Node?\n(Y/N): ");
    scanf("%c", &ch);
    while (ch == 'Y' || ch == 'y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter a value: ");
        scanf("%d", &New->data);
        fflush(stdin);
        New->next = NULL;
        PTR->next = New;
        PTR = PTR->next;
        printf("Do you want to add another node?\n(Y/N): ");
        scanf("%c", &ch);
    }
    return (head);
};
struct Node *reverse(struct Node *head)
{
    struct Node *NewHead = NULL;
    if (head == NULL || head->next == NULL)
    {
        return (head);
    }
    NewHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return (NewHead);
}
void traveral(struct Node *head)
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
    struct Node *Head, *PTR1, *PTR2, *PTR3;
    Head = create(Head);
    printf("\nOriginal Linked List\n");
    traveral(Head);
    Head = reverse(Head);
    printf("\nReversed Linked List\n");
    traveral(Head);
    return 0;
}