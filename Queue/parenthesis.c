#include <stdio.h>
#define size 10
int top = -1;
char stack[size];
char arr[size];

int main(void)
{
    printf("\nEnter the expression\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '(')
        {
            top++;
            stack[top] = '(';
        }
        else if (arr[i] == ')')
        {
            top--;
        }
    }
    if (top == -1)
    {
        printf("The expression is balanced \n");
    }
    else
        printf("The expression is not balanced\n");
    return 0;
}