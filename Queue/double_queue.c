#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int Q[SIZE];
int front = -1;
int rear = -1;
void isEmpty()
{
    if (front == -1 && rear == -1)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE IS NOT EMPTY!\n");

}
int Insert_At_Front(int Item)
{
    if (front + 1 == rear || (rear == -1 && front == SIZE - 1) || (front == -1 && rear == 0))
    {
        printf("Overflow");
        return 0;
    }
    else
    {
        front++;
        Q[front] = Item;
    }
    return 0;
}
int Insert_At_Rear(int Item)
{
    if (rear - 1 == front || (rear == -1 && front == SIZE - 1) || (front == -1 && rear == 0))
    {
        printf("Overflow!");

    }
    else if (rear == -1)
    {
        rear = SIZE - 1;
        Q[rear] = Item;
    }
    else
    {
        rear--;
        Q[rear] = Item;
    }
    return 0;
}
int Delete_from_front()
{
    int value;
    if (front == -1)
    {
        printf("\nUnderflow!");
        return (0);
    }
    else
    {
        value = Q[front];
        Q[front] = 0;
        front--;
    }
    printf("\nThe value deleted: %d", value);
    return 0;
}
int Delete_from_rear()
{
    int value;
    if (rear == -1)
    {
        printf("\nUnderflow!");
        return (0);
    }
    else if (rear == SIZE - 1)
    {
        value = Q[rear];
        Q[rear] = 0;
        rear = -1;
    }
    else
    {
        value = Q[rear];
        Q[rear] = 0;
        rear++;
    }
    printf("\nThe value deleted: %d", value);
    return 0;
}
void SEARCH(int item)
{
    int flag = 0;
    int a;
    for (int i = 0; i <= SIZE-1; i++)
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
void PEEK(){
    int ch;
    printf("\nDisplay the Top element from which side?\n\n1. Front\n2. Rear\n(1/2): ");
    scanf("%d",&ch);
    if(ch==1)
    printf("The Topmost element: %d",Q[front]);
   else if(ch==2)
    printf("The Topmost element: %d",Q[rear]);
    else
    printf("\nWrong Choice!");
}

int main(void)
{
    int ch, val, popped,item;
    while (1)
    {
        printf("\n1. Check if the Queue is Empty");
        printf("\n2. Display the Contents of the Queue");
        printf("\n3. Insert an element at the Front-End of the Queue");
        printf("\n4. Insert an element at the Rear-End of the Queue");
        printf("\n5. Delete an element from the Front-End of the Queue");
        printf("\n6. Delete an element from the Rear-End of the Queue");
        printf("\n7. Display the top element of the Queue");
        printf("\n8. Search an element from the Queue");
        printf("\n9. Display the size of the Queue");
        printf("\n10. Exit");
        printf("\n\nEnter: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isEmpty();
            break;
        case 2:
            for (int i = 0; i <= SIZE-1; i++)
            {
                printf("%d  ", Q[i]);
            }
            break;
        case 3:
            printf("\nEnter the value: ");
            scanf("%d", &item);
            Insert_At_Front(item);
            break;
        case 4:
            printf("\nEnter the value: ");
            scanf("%d", &item);
            Insert_At_Rear(item);
            break;
        case 5:
            Delete_from_front(Q, front, rear);
            break;
        case 6:
            Delete_from_rear(Q, front, rear);
            break;
        case 7:
            PEEK();
            break;
        case 8:
            int data;
            printf("\nEnter the element you want to search: ");
            scanf("%d", &data);
            SEARCH(data);
            break;
        case 9:
            int count = 0;
            for (int i = 0; i <= SIZE-1; i++)
            {
                if(Q[i]!=0)
                count++;
            }
            printf("SIZE: %d", count);
            break;
        case 10:
            exit(1);
            break;
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
    return 0;
}