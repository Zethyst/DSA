#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int q[SIZE];
int count = 0;
int front = 0;
int rear = 0;
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
void ENQUEUE(Item)
{
    if (count < SIZE)
    {
        q[rear % SIZE] = Item;
        rear++;
        count++;
    }
    else
        printf("\nQueue is FULL\n");
}
void DEQUEUE()
{
    int popped;
    if (count != 0)
    {
        popped = q[front % SIZE];
        printf("\nPopped Element: %d", popped);
        q[front % SIZE] = 0; // Dummy Value
        front++;
        count--;
    }
    else
        printf("\nQueue Underflow!");
}
void PEEK()
{
    printf("\nThe Topmost Element is: %d", q[front]);
}
int main(void)
{
    int ch, val;
    while (1)
    {
        printf("\n1. Check if the Queue is Empty");
        printf("\n2. Check if the Queue is Full");
        printf("\n3. Display the Contents of the Queue");
        printf("\n4. Insert an element in the Queue");
        printf("\n5. Delete an element from the Queue");
        printf("\n6. Display the size of the Queue");
        printf("\n7. Display Rear position");
        printf("\n8. Display Front position");
        printf("\n9. Display the Top element");
        printf("\n10. Exit");
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
            // Approach for displaying Normal Queue
            for (int i = 0; i <= SIZE - 1; i++)
            {
                printf("%d  ", q[i]);
            }

            //    Alternative Approach for displaying circular queue:
            // for (int i = front; i < rear; i++)
            // {
            //     printf("%d  ", q[i % SIZE]);
            // }

            break;
        case 4:
            printf("\nEnter the value: ");
            scanf("%d", &val);
            ENQUEUE(val);
            break;
        case 5:
            DEQUEUE();
            break;
        case 6:
            printf("\nSize: %d\n", count);
            break;
        case 7:
            printf("Rear: %d", rear);
            break;
        case 8:
            printf("Front: %d", front);
            break;
        case 9:
            PEEK();
            break;
        case 10:
            exit(0);
        default:
            printf("\nWrong Choice!");
            break;
        }
    }
    return 0;
}