#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
    struct Node *prev;
};
void isEmpty(struct Node *front, struct Node *rear)
{
    if (front == NULL && rear == NULL)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE is NOT Empty");
}
void Traversal(struct Node *f, struct Node *r)
{
    if (f == NULL)
        printf("\nQUEUE IS EMPTY!\n");
    else
    {
        while (f != r)
        {
            printf("%d -> ", f->info);
            f = f->next;
        }
        printf("%d -> ", f->info);
        printf("NULL");
    }
}
void Insert_At_First(struct Node **front, struct Node **rear, int data)
{
    struct Node *New;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->info = data;
    New->next = NULL;
    New->prev = NULL;
    if (*front == NULL)
    {
        *front = *rear = New;
    }
    else
    {
        (*front)->prev = New;
        New->next = *front;
        *front = (*front)->prev;
    }
}
void Insert_at_rear(struct Node **front, struct Node **rear, int data)
{
    struct Node *New;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->info = data;
    New->next = NULL;
    New->prev = NULL;
    if (*rear == NULL)
    {
        *front = *rear = New;
    }
    else
    {
        (*rear)->next = New;
        New->prev = *rear;
        *rear = (*rear)->next;
    }
}
int DEL_AT_FRONT(struct Node **front, struct Node **rear)
{
    struct Node *temp;
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
        *front = (*front)->next;
    }
    printf("\nThe Value Deleted is: %d", temp->info);
    free(temp);
}
int DEL_AT_REAR(struct Node **front, struct Node **rear)
{
    struct Node *temp, *link;
    if (*rear == NULL)
    {
        printf("\nUNDERFLOW!");
        return (0);
    }
    else if (*front == *rear)
    {
        temp = *rear;
        *front = NULL;
        *rear = NULL;
    }
    else
    {
        temp = *rear;
        *rear = (*rear)->prev;
    }
    printf("\nThe Value Deleted is: %d", temp->info);
    free(temp);
}
void SEARCH(struct Node *front, int value)
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
void GetFront(struct Node *front)
{
    printf("\nThe First Element: %d", front->info);
}
void GetRear(struct Node *rear)
{
    printf("\nThe Last Element: %d", rear->info);
}
int main(void)
{

    struct Node *front, *rear;
    front = NULL;
    rear = NULL;
    int ch, val, popped, item;
    while (1)
    {
        printf("\n1. Check if the Queue is Empty");
        printf("\n2. Display the Contents of the Queue");
        printf("\n3. Insert an element at the Front-End of the Queue");
        printf("\n4. Insert an element at the Rear-End of the Queue");
        printf("\n5. Delete an element from the Front-End of the Queue");
        printf("\n6. Delete an element from the Rear-End of the Queue");
        printf("\n7. Display the Front Element of the Queue");
        printf("\n8. Display the Rear Element of the Queue");
        printf("\n9. Search an element from the Queue");
        printf("\n10. Display the size of the Queue");
        printf("\n11. Exit");
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
            printf("\nEnter a value: ");
            scanf("%d", &item);
            Insert_At_First(&front, &rear, item);
            break;
        case 4:
            printf("\nEnter a value: ");
            scanf("%d", &item);
            Insert_at_rear(&front, &rear, item);
            break;
        case 5:
            DEL_AT_FRONT(&front, &rear);
            break;
        case 6:
            DEL_AT_REAR(&front, &rear);
            break;
        case 7:
            GetFront(front);
            break;
        case 8:
            GetRear(rear);
            break;
        case 9:
            printf("\nEnter the element you want to search: ");
            scanf("%d", &val);
            SEARCH(front, val);
            break;
        case 10:
            struct Node *ptr;
            ptr = front;
            int count = 0;
            while (ptr != rear)
            {
                count++;
                ptr = ptr->next;
            }
            if (ptr == NULL)
            {
                printf("\nThe Size of the QUEUE is: 0");
            }
            else
                printf("\nThe Size of the QUEUE is: %d", count + 1);
            break;
        case 11:   
            exit(0);
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
    return 0;
}