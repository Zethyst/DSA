#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert(struct node *head, int n)
{
    struct node *temp = head, *newnode;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("Enter the data:");
            scanf("%d", &head->data);
            head->next = NULL;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data:");
            scanf("%d", &newnode->data);
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
    return (head);
}
void traversal(struct node *head)
{
    float avg = 0;
    int c = 1;
    struct node *temp = head;
    while (temp != NULL)
    {
        c++;
        avg += temp->data;
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf("->");
        temp = temp->next;
    }
    avg = avg / c;
    printf("\nThe average is:%f", avg);
}
int main()
{
    int n;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the no. of nodes:");
    scanf("%d", &n);
    head = insert(head, n);
    traversal(head);
}