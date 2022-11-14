/*Name: Akshat Jaiswal
  Roll No: 21052646
  Section: CSE 37
  WAP to check if the parentheses are balanced or not using STACKS
  */

#include <stdio.h>
#define SIZE 10
int Stack[SIZE], Top = -1;

int main(void)
{
    char *str;
    int i = 0;
    printf("Enter a equation: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == '(')
        {
            Stack[++Top] = str[i];
            i++;
        }
        else if (str[i] == ')')
        {
            Top--;
            i++;
        }
        else
            i++;
    }
    if (Top == -1)
        printf("Parenthesis Balanced!");
    else
        printf("Parenthesis Not Balanced!");

    return 0;
}