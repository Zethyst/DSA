#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};
void isEmpty(struct Node *front, struct Node *rear)
{
    if (front == NULL && rear == NULL)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE is NOT Empty");
}
void Traversal(struct Node *front, struct Node *rear)
{
    struct Node *ptr;
    ptr = front;
    while (ptr != rear)
    {
        printf("%d ->", ptr->info);
        ptr = ptr->next;
    }
    printf("%d -> NULL", ptr->info);
}
void ENQUEUE(struct Node **front, struct Node **rear, int data)
{
    struct Node *New, *link;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->info = data;
    New->next = NULL;
    if (*front == NULL && *rear == NULL)
    {
        *front = New;
        *rear = New;
    }
    else
    {
        link = *rear;
        link->next = New;
        link = link->next;
        *rear = link;
    }
}
void DEQUEUE(struct Node **front, struct Node **rear)
{
    struct Node *temp, *link;
    if (*front == NULL)
    {
        printf("\nUNDERFLOW!");
        return (0);
    }
    else if (*front == *rear)
    {
        temp = *front;
        *front = NULL;
        *rear = NULL;
    }
    else
    {
        temp = *front;
        link = *front;
        link = link->next;
        *front = link;
    }
    printf("\nThe Value Deleted is: %d", temp->info);
    free(temp);
}
void SEARCH(struct Node *front, struct Node *rear, int value)
{
    struct Node *ptr;
    ptr = front;
    int count = 0, flag = 0;
    while (ptr != NULL)
    {
        count++;
        if (ptr->info == value)
        {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1)
        printf("\nThe Element was found successfully on position number %d", count);
    else
        printf("\nThe Element was NOT found!");
}
void PEEK(struct Node *front){
    printf("\nThe Topmost Element: %d",front->info);
}
int main(void)
{

    struct Node *front, *rear;
    front = NULL;
    rear = NULL;
    int ch, val, popped;
    while (1)
    {
        printf("\n1. Check if the Queue is Empty");
        printf("\n2. Display the Contents of the Queue");
        printf("\n3. Insert an element in the Queue");
        printf("\n4. Delete an element from the Queue");
        printf("\n5. Display the top element of the Queue");
        printf("\n6. Search an element from the Queue");
        printf("\n7. Display the size of the Queue");
        printf("\n8. Exit");
        printf("\n\nEnter: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isEmpty(front, rear);
            break;
        case 2:
            Traversal(front, rear);
            break;
        case 3:
            int item;
            printf("\nEnter a value: ");
            scanf("%d", &item);
            ENQUEUE(&front, &rear, item);
            break;
        case 4:
            DEQUEUE(&front, &rear);
            break;
        case 5:
            PEEK(front);
            break;
        case 6:
            printf("\nEnter the element you want to search: ");
            scanf("%d", &val);
            SEARCH(front, rear, val);
            break;
        case 7:
            struct Node *ptr;
            ptr = front;
            int count = 0;
            while (ptr != NULL)
            {
                count++;
                ptr = ptr->next;
            }
            printf("\nThe Size of the QUEUE is: %d", count);
            break;
        case 8:
            exit(0);
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
        return 0;
}