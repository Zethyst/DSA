#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *PTR1, *PTR2, *PTR3, *New, *Head = NULL, *Tail;

void Creation()
{
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter a value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    New->prev = NULL;
    Head = New;
    PTR1 = Head;
    char ch;
    printf("Do you want to add another node?\n\n(Y/N): ");
    scanf("%c", &ch);
    fflush(stdin);
    while (ch == 'Y' || ch == 'y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a value: ");
        scanf("%d", &New->data);
        fflush(stdin);
        New->next = NULL;
        New->prev = PTR1;
        PTR1->next = New;
        PTR1 = PTR1->next;
        printf("Do you want to add another node?\n\n(Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
    }
}
void display()
{
    PTR1 = Head;
    while (PTR1 != NULL)
    {
        printf("%d  ", PTR1->data);
        PTR1 = PTR1->next;
    }
}
void Reverse()
{
    PTR1 = Head;
    PTR2 = Head->next;
    PTR3 = Head->next->next;
    if (Head == NULL || Head->next == NULL)
    {
        printf("\nReverse Not Possible!\n");
    }
    else if (Head->next->next == NULL)
    {
        PTR1->next->next = Head;
        PTR1->next->prev = NULL;
        Head->prev = Head->next;
        Head = PTR1->next;
        PTR1->next = NULL;
    }
    else
    {
        PTR2->next = PTR1;
        PTR1->prev = PTR2;
        PTR2->prev = NULL;
        PTR1->next = NULL;

        PTR1 = PTR2;
        PTR2 = PTR3;
        PTR3 = PTR3->next;
        while (PTR3 != NULL)
        {
            PTR2->next = PTR1;
            PTR1->prev = PTR2;

            PTR1 = PTR2;
            PTR2 = PTR3;
            PTR3 = PTR3->next;
        }
        PTR2->next=PTR1;
        PTR1->prev=PTR2;
        Head=PTR2;

    }
}
int main(void)
{
    Creation();
    Reverse();
    display();

    return 0;
}