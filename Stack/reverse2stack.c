#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int STACK1[SIZE];
int STACK2[SIZE];

int reverse(int top1)
{
    int top2 = -1;
    for (int i = top1; i > -1; i--)
    {
        STACK2[++top2] = STACK1[i];
    }
    return top2;
}
void PUSH(int data, int *top)
{
    if (*top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW!");
    }
    else
    {
        STACK1[++(*top)] = data;
    }
}
int POP(int top)
{
    int popped;
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW!");
    }
    else
    {
        popped = STACK1[top];
        top--;
        printf("\nThe Value popped: %d", popped);
    }
    return top;
}
void display(int top, int top2)
{
    if (top == -1)
    {
        printf("\nNo Elements to Display!");
    }

    for (int i = 0; i <= top; i++)
    {
        printf("%d ", STACK1[i]);
    }
    printf("\n");
    for (int i = 0; i <= top2; i++)
    {
        printf("%d ", STACK2[i]);
    }
}
int main(void)
{
    int TOP1 = -1;
    int TOP2;
    int ch, val;
    while (1)
    {
        printf("\n1. Push an element into the stack");
        printf("\n2. Pop an element from the stack");
        printf("\n3. Display the contents of the stack");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("\nEnter the value: ");
            scanf("%d", &val);
            PUSH(val, &TOP1);
        }
        if (ch == 2)
        {
            TOP1 = POP(TOP1);
        }
        if (ch == 3)
        {
            TOP2 = reverse(TOP1);
            display(TOP1, TOP2);
        }
        if (ch == 4)
        {
            exit(0);
        }
    }

    return 0;
}