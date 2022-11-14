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
void traveral(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d  ->", ptr->data);
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
    if (Head->next == NULL)
    {
        printf("Reverse not Possible. Only one Node is there.");
        return 1;
    }
    PTR1 = Head;
    PTR2 = Head->next;
    PTR3 = Head->next->next;
    if (Head->next->next == NULL)
    {
        Head = PTR1->next;
        PTR1->next->next = PTR1;
        PTR1->next = NULL;
    }
    else
    {
        PTR2->next = PTR1;
        // Head = PTR2;
        PTR1->next = NULL;

        PTR1 = PTR2;
        PTR2 = PTR3;
        PTR3 = PTR3->next;

        while (PTR3 != NULL)
        {
            PTR2->next = PTR1;
            PTR1 = PTR2;
            PTR2 = PTR3;
            PTR3 = PTR3->next;
        }
        PTR2->next=PTR1;
        Head=PTR2;
    }
    traveral(Head);
    return 0;
}