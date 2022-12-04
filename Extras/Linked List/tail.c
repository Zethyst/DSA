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
int traveral(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
        count++;
    }
    printf("NULL\n");
    return count;
}
void Print_Value(struct Node *head, int n)
{
    int count = 0;
    struct Node *ptr = head;
    while (ptr != NULL && count != n - 1)
    {
        ptr = ptr->next;
        count++;
    }
    printf("\nThe Nth Node is: %d", ptr->data);
}
int main(void)
{
    int n, count;
    struct Node *Head = NULL;
    Head = create(Head);
    count = traveral(Head);
    printf("\nNumber of Nodes: %d", count);
    printf("\nEnter the value of n (nth node from tail): ");
    scanf("%d", &n);
    count = count - n;
    Print_Value(Head, count);
    return 0;
}