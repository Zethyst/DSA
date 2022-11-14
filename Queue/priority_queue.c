#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int front = -1;
int rear = -1;
struct QUEUE
{
    int data;
    int priority;
} q[SIZE];

void isEmpty()
{
    if (rear == -1)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE IS NOT EMPTY!\n");

}
void isFull()
{
    if (rear == SIZE - 1)
        printf("\nQUEUE IS FULL\n");
}
int ENQUEUE(int d, int p)
{

    // if (rear == SIZE - 1)
    // {
    //     printf("\nOverflow!");
    //     return (0);
    // }
    // else if (rear == -1)
    // {
    //     front = 0;
    //     rear = 0;
    // }
    // else
    // {
        rear++;
    // }
    q[rear].data = d;
    q[rear].priority = p;

    return 0;
}
int DEQUEUE()
{
    int value;
    int highestpriority = 0;
    int index = -1;
    for (int i = front; i < rear; i++)
    {
        if (highestpriority == q[i].priority && q[index].data < q[i].data)
        {
            highestpriority = q[i].priority;
            index = i;
        }
        else if (highestpriority < q[i].priority)
        {
            highestpriority = q[i].priority;
            index = i;
        }

        for (int i = index; i < SIZE; i++)
        {
            q[i] = q[i + 1];
        }
    }

    printf("\nThe value deleted: %d", q[index].data);
    return 0;
}
void SEARCH(int item)
{
    int flag = 0;
    int a;
    for (int i = front; i <= rear; i++)
    {
        if (q[i].data == item)
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
    printf("\nThe Topmost Element is: %d", q[front]);
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
            if (isEmpty)
                printf("\nNo Elements to display!");
            else
            {
                for (int i = 0; i <= rear; i++)
                {
                    printf("%d  ", q[i].data);
                }
            }
            break;
        case 4:
            int item, priority;
            printf("\nEnter the value: ");
            scanf("%d", &item);
            printf("\nEnter the priority: ");
            scanf("%d", &priority);
            ENQUEUE(item, priority);
            break;
        case 5:
            DEQUEUE(q, front, rear);
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