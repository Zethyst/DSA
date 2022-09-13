#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void insert_pos(struct Node **Head)
{
    int pos, count = 1;
    struct Node *PTR, *New;
    PTR = *Head;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the position you want to insert a node: ");
    scanf("%d", &pos);
    printf("\nEnter a value to be inserted at the position: ");
    scanf("%d", &New->data);
    while (PTR != NULL && count < pos)
    {
        PTR = PTR->next;
        count++;
    }
    New->next = PTR;
    New->prev = PTR->prev;
    (PTR->prev)->next = New;
    PTR->prev = New;
    PTR = *Head;
    while (PTR != NULL)
    {
        printf("%d  ", PTR->data);
        PTR = PTR->next;
    }
}
int main(void)
{
    struct Node *PTR, *New, *Head, *Tail;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter a value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    New->prev = NULL;
    Head = New;
    PTR = Head;
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
        New->prev = PTR;
        PTR->next = New;
        PTR = PTR->next;
        printf("Do you want to add another node?\n\n(Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
    }
    PTR = Head;
    while (PTR != NULL)
    {
        printf("%d  ", PTR->data);
        PTR = PTR->next;
    }
    insert_pos(&Head);
    // PTR = Head;
    // while (PTR != NULL)
    // {
    //     printf("%d  ", PTR->data);
    //     PTR = PTR->next;

    //     return 0;
    // }
}