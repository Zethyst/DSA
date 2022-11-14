/*Name: Akshat Jaiswal
  Roll No: 21052646
  Section: CSE 37
  WAP to reverse a string using STACKS
  */

#include <stdio.h>
#define SIZE 10
int Stack[SIZE], Top = -1;

int main(void)
{
    char *str;
    int i = 0;
    printf("Enter a Word: ");
    gets(str);
    while (str[i] != '\0')
    {
        Stack[++Top] = str[i];
        i++;
    }
    printf("Reversed: ");
    while (Top != -1)
    {
        printf("%c ", Stack[Top]);
        Top--;
    }

    return 0;
}