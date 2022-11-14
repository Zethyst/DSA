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
int isEmpty(struct Queue *q)
{
    if (q->front == -1 && q->rear == -1)
    {
        printf("\nQUEUE IS EMPTY!\n");
        return 1;
    }
    else
        printf("\nQUEUE IS NOT EMPTY!\n");
    return 0;
}
int isFull(struct Queue *q)
{
    if (q->rear == q->size - 1)
    {
        printf("\nQUEUE IS FULL!\n");
        return 1;
    }
    else
        printf("\nQUEUE IS NOT FULL!\n");
    return 0;
}
void TRAVERSAL(struct Queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d  ", q->arr[i]);
    }
}
void ENQUEUE(struct Queue *q, int item)
{
    if (isFull(q))
    {
        printf("\nOverflow!\n");
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->front = q->rear = 0;
        q->arr[q->rear] = item;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = item;
    }
}
void DEQUEUE(struct Queue *q)
{
    int val;
    if (isEmpty(q))
        printf("\nOverflow!\n");
    else if (q->front == q->rear)
    {
        val = q->arr[q->front];
        q->arr[q->front] = 0;
        q->front = q->rear = -1;
    }
    else
    {
        val = q->arr[q->front];
        q->arr[q->front] = 0;
        q->front++;
    }
    printf("\nThe Deleted Value is: %d",val);
}
int main(void)
{
    struct Queue *q;
    q->front = -1;
    q->rear = -1;
    printf("\nEnter the size of the Queue: ");
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size * (sizeof(int)));
    ENQUEUE(q, 5);
    ENQUEUE(q, 6);
    TRAVERSAL(q);
    DEQUEUE(q);

    return 0;
}