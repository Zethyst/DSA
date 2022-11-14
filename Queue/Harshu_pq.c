#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    int priority;
    struct Node *next;
};
void traversal(struct Node *Front, struct Node *Rear)
{
    struct Node *ptr;
    ptr = Front;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}
void insert(struct Node **Front, struct Node **Rear, int p, int i)
{
    struct Node *ptr, *new, *temp;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data=i;
    new->priority=p;
    new->next = NULL;
    ptr = *Front;
    if (*Front == NULL)
    {
        *Front = new;
    }
    else if (ptr->priority > new->priority)
    {
        new->next=ptr;
        // temp = *Front;
        *Front = new;
        // new = temp;
    }
    else
    {
        while (ptr!=NULL && ptr->priority <= new->priority)
        {
            ptr = ptr->next;
        }
        temp = ptr;
        new->next = temp->next;
        ptr->next = new;
    }
}
int main(void)
{
    int i, p;
    struct Node *Front, *Rear, *First, *Second, *Third, *Fourth;
    Front = NULL;
    Rear = NULL;
    First = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Front = First;
    First->priority = 1;
    First->data = 10;
    First->next = Second;
    Second->priority = 2;
    Second->data = 20;
    Second->next = Third;
    Third->priority = 3;
    Third->data = 30;
    Third->next = Fourth;
    ;
    Fourth->priority = 4;
    Fourth->data = 40;
    Fourth->next = NULL;
    printf("\nEnter the priority and the item :\n");
    scanf("%d%d", &p, &i);
    insert(&Front, &Rear, p, i);
    traversal(Front, Rear);
    return 0;
}