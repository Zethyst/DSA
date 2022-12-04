// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
#include <stdlib.h>
#define Size 5
int Q1[Size], Q2[Size];
int front1 = 0, rear1 = -1;
int front2 = -1, rear2 = -1;
int PUSH(int x)
{
    int i;
    if (rear1 == Size - 1)
    {
        printf("\nQUEUEU is FULL!!");
        return 1;
    }
    else if (front2 == -1 && rear2 == -1)
    {
        front2 = rear2 = 0;
    }
    Q2[rear2] = x;

    while (front1 != rear1 + 1)
    {
        Q2[++rear2] = Q1[front1++];
    }
    for (int i = front2; i <= rear2; i++)
    {
        Q1[i] = Q2[i];
    }
    front1 = front2;
    rear1 = rear2;

    front2 = rear2 = -1;
}
void POP()
{
    int popped;
    if (front1 == Size - 1)
    {
        popped = Q1[front1];
        front1 = 0;
    }
    else
    {
        popped = Q1[front1++];
    }
    printf("Popped Element is: %d", popped);
}
void display()
{

    for (int i = front1; i <= rear1; i++)
    {
       printf("[ %d ]\n", Q1[i]);
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
            if (front1 == -1 && rear1 == -1)
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
            if (front1 == -1)
            {
                printf("\nStack is Empty.");
            }
            else
            {
                printf("The Topmost Element: %d", Q1[front1]);
            }
            break;
        case 6:
            exit(0);
        }
    }
}
// END OF LINE