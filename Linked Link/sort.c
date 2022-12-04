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
    printf("\nEnter value: ");
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
        printf("\nEnter value: ");
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
struct Node *insert(struct Node *head, int d)
{
    struct Node *New, *PTR;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->data = d;
    New->next = NULL;

    if (head == NULL)
    {
        head = New;
    }
    else
    {
        PTR = head;
        while (PTR->next != NULL)
        {
            PTR = PTR->next;
        }
        PTR->next = New;
    }
    return (head);
}
struct Node *Sort(struct Node *head)
{
    struct Node *ptr=NULL, *ptr2=NULL;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr2 = ptr->next;
        while (ptr2->next!= NULL)
        {
            if (ptr->data < ptr2->data)
            {
                int temp = ptr->data;
                ptr->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2=ptr2->next;
        }
        ptr = ptr->next;
    }
}
void display(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int main(void)
{

    struct Node *Head1, *Head2, *Head3;
    struct Node *PTR1, *PTR2, *New;
    Head1 = NULL;
    Head2 = NULL;
    Head3 = NULL;

    printf("\n\nFirst Linked List: ");
    Head1 = create(Head1);
    Head1 = Sort(Head1);
    display(Head1);
    printf("\n\nSecond Linked List: ");
    Head2 = Sort(Head2);
    Head2 = create(Head2);
    display(Head2);
    PTR1 = Head1;
    PTR2 = Head2;
    while (PTR1 != NULL && PTR2 != NULL)
    {
        if (PTR1->data == PTR2->data)
        {
            Head3 = insert(Head3, PTR2->data);
            PTR1 = PTR1->next;
            PTR2 = PTR2->next;
        }
        else if (PTR1->data < PTR2->data)
        {
            Head3 = insert(Head3, PTR1->data);
            PTR1 = PTR1->next;
        }
        else
        {
            Head3 = insert(Head3, PTR2->data);
            PTR2 = PTR2->next;
        }
    }
    while (PTR2 != NULL)
    {
        Head3 = insert(Head3, PTR2->data);
        PTR2 = PTR2->next;
    }
    while (PTR1 != NULL)
    {
        Head3 = insert(Head3, PTR1->data);
        PTR1 = PTR1->next;
    }
    printf("\nSorted:\n");
    display(Head3);
    return 0;
}
