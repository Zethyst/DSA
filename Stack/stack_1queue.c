// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
#include <stdlib.h>

int Q[100];
int front = -1, rear = -1;
int count = 0;

int PUSH(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    Q[rear] = x;
    count++;
    int i = 0;
    while (i != count - 1)
    {
        Q[++rear] = Q[front];
        i++;
        front++;
    }
}
void POP()
{
    int popped;
    popped = Q[front++];
    printf("\nPopped Element is: %d", popped);
}
void display()
{
    printf("\n");
    for (int i = front; i <= rear; i++)
    {
          printf("[ %d ]\n", Q[i]);
    }
}
int main(void)
{
    int ch, val;
    while (1)
    {
        printf("\n----------MENU-----------\n");
        printf("\n1. Check if the Stack is Empty or not");
        printf("\n2. Display the contents of the Stack");
        printf("\n3. Push an element into the Stack");
        printf("\n4. Pop an element from the Stack");
        printf("\n5. Display the top element of the Stack");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (front == -1 && rear == -1)
            {
                printf("STACK is EMPTY!");
            }
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nEnter the value: ");
            scanf("%d", &val);
            PUSH(val);
            break;
            return 0;
        case 4:
            POP();
            break;
        case 5:
            if (front == -1)
            {
                printf("\nStack is Empty.");
            }
            else
            {
                printf("The Topmost Element: %d", Q[front]);
            }
            break;
        case 6:
            exit(0);
        }
    }
}
// END OF LINE