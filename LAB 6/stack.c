#include <stdio.h>
#define SIZE 5
int STACK[SIZE];
int Top = -1;
int main(void)
{
    int ch, val, popped;
    while (1)
    {
        printf("\n1. Check if the stack is Empty");
        printf("\n2. Display the Contents of the Stack");
        printf("\n3. Push an element in the Stack");
        printf("\n4. Pop an element from the Stack");
        printf("\n5. Exit");
        printf("\n\nEnter: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (Top == -1)
                printf("\nSTACK IS EMPTY!");
            else
                printf("\nStack is not Empty, you can clear to push an element ;)");
            break;
        case 2:
            for (int i = 0; i <= Top; i++)
            {
                printf("%d  ", STACK[i]);
            }
            break;
        case 3:
            if (Top != SIZE - 1)
            {
                printf("\nEnter the value: ");
                scanf("%d", &val);
                STACK[++Top] = val;
            }
            else
                printf("\nStack Overflow!");
            break;
        case 4:
            if (Top != -1)
            {
                popped = STACK[Top];
                printf("\nPopped Element: %d", popped);
                Top--;
            }
            else
                printf("\nStack Underflow!");
            break;
        case 5:
            exit(0);
        default:
            printf("\nWrong Choice!");
            break;
        }
    }
    return 0;
}