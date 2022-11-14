#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int Q[SIZE];
int front = -1;
int rear = -1;
void isEmpty()
{
    if (front == -1 && rear == -1)
        printf("\nQUEUE IS EMPTY!\n");
}
void isFull()
{
    if (rear == SIZE - 1)
        printf("\nQUEUE IS FULL\n");
}
int ENQUEUE(int data)
{
    if (rear == SIZE - 1)
    {
        printf("\nOverflow!");
        return (1);
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }
    Q[rear] = data;
    return 0;
}
int DEQUEUE()
{
    int value;
    if (front == -1)
    {
        printf("\nUnderflow!");
        return (0);
    }
    else if (front == rear)
    {
        value = Q[front];
        Q[front] = 0;
        front = rear = -1;
    }
    else
    {
        value = Q[front];
        Q[front] = 0;
        front++;
    }
    printf("\nThe value deleted: %d", value);
    return 0;
}
void SEARCH(int item)
{
    int flag = 0;
    int a;
    for (int i = front; i <= rear; i++)
    {
        if (Q[i] == item)
        {
            a = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\nThe Element was found successfully on position number %d", a + 1);
    else
        printf("\nThe Element was NOT found!");
}
void PEEK()
{
    printf("\nThe Topmost Element is: %d", Q[front]);
}
int main(void)
{
    int ch;
    while (1)
    {
        printf("\n1. Check if the Queue is Empty");
        printf("\n2. Check if the Queue is Full");
        printf("\n3. Display the Contents of the Queue");
        printf("\n4. Insert an element in the Queue");
        printf("\n5. Delete an element from the Queue");
        printf("\n6. Display the top element of the Queue");
        printf("\n7. Search an element from the Queue");
        printf("\n8. Display the size of the Queue");
        printf("\n9. Exit");
        printf("\n\nEnter: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isEmpty();
            break;
        case 2:
            isFull();
            break;
        case 3:
            for (int i = front; i <= rear; i++)
            {
                printf("%d  ", Q[i]);
            }
            break;
        case 4:
            int item;
            printf("\nEnter the value: ");
            scanf("%d", &item);
            ENQUEUE(item);
            break;
        case 5:
            DEQUEUE(Q, front, rear);
            break;
        case 6:
            PEEK();
            break;
        case 7:
            int data;
            printf("\nEnter the element you want to search: ");
            scanf("%d", &data);
            SEARCH(data);
            break;
        case 8:
            int count = 0;
            for (int i = front; i <= rear; i++)
            {
                count++;
            }
            printf("SIZE: %d", count);
            break;
        case 9:
            exit(1);
            break;
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
    return 0;
}