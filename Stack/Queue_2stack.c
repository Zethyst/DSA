#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
int Top1 = -1, Top2 = -1;
int stack1[MAXSIZE];
int stack2[MAXSIZE];

int PUSH(int value)
{
    if (Top1 == MAXSIZE - 1)
    {
        printf("STACK OVERFLOW!");
        return 1;
    }
    while (Top1 != -1)
    {
        stack2[++Top2] = stack1[Top1--];
    }
    stack1[++Top1] = value;
    while (Top2 != -1)
    {
        stack1[++Top1] = stack2[Top2--];
    }
}
int POP(int Top)
{
    int Data;
    if (Top == -1)
    {
        printf("STACK UNDERFLOW!");
    }
    Data = stack1[Top1];
    Top1--;
    return (Data);
}
int main(void)
{
    int value;
    int ch;
    while (1)
    {
        printf("\n----------MENU-----------\n");
        printf("\n1. Check if the Stack is Empty or not");
        printf("\n2. Display the contents of the Stack");
        printf("\n3. Push an element into the Stack");
        printf("\n4. Pop an element from the Stack");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (Top1 == -1)
            {
                printf("STACK is EMPTY!");
            }
            break;
        case 2:
            for (int i = Top1; i >= 0; i--)
            {
                printf("%d ", stack1[i]);
            }
            break;
        case 3:
            printf("Enter the value you want to insert into STACK: ");
            scanf("%d", &value);
            PUSH(value);

            break;
        case 4:
            int popped_value;
            popped_value = POP(Top1);
            printf("\nThe value popped: %d", popped_value);
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