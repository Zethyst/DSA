#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int data;
    int front;
    int rear;
    int *arr;
    int size;
};
void isEmpty(int f, int r)
{
    if (f == -1 && r == -1)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE IS NOT EMPTY!\n");
}
int main(void)
{
    struct Queue q;
    printf("\nEnter the size of the Queue: ");
    scanf("%d", &q.size);
    q.arr = (int *)malloc(q.size * (sizeof(int)));
    q.front = q.rear = -1;
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
            isEmpty(q.front, q.rear);
            break;
        case 2:
            for (int i = q.front; i <= q.rear; i++)
            {
                printf("%d  ", *(q.arr + i));
            }
            break;
        case 3:
            int item;
            printf("\nEnter the value: ");
            scanf("%d", &item);
            // ENQUEUE(&q.arr, &q.front, &q.rear, q.size, item);
            if (q.rear == q.size - 1)
            {
                printf("\nOverflow!");
            }
            else if (q.front == -1)
            {
                q.front = 0;
                q.rear = 0;
            }
            else
            {
                q.rear++;
            }
            *(q.arr + q.rear) = item;
            break;
        case 4:
            // DEQUEUE(q.arr, q.front, q.rear, q.size);
            int value;
            if (q.front == -1)
            {
                printf("\nUnderflow!");
            }
            else if (q.front == q.rear)
            {
                value = *(q.arr + q.front);
                *(q.arr + q.front) = 0;
                q.front = q.rear = -1;
            }
            else
            {
                value = *(q.arr + q.front);
                *(q.arr + q.front) = 0;
                q.front++;
            }
            printf("\nThe value deleted: %d", value);

            break;
        case 5:
            printf("\nThe Topmost element is: %d", *(q.arr + q.front));
            break;
        case 6:
            int data;
            printf("\nEnter the element you want to search: ");
            scanf("%d", &data);
            // PEEK(q.arr, q.front, q.rear, data);
            int flag = 0;
            int index;
            for (int i = q.front; i <= q.rear; i++)
            {
                if (*(q.arr + i) == item)
                {
                    index = i;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                printf("\nThe Element was found successfully on position number %d", index + 1);
            else
                printf("\nThe Element was NOT found!");
            break;
        case 7:
            int count = 0;
            for (int i = q.front; i <= q.rear; i++)
            {
                count++;
            }
            printf("SIZE: %d", count);
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
    return 0;
}