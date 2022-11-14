/*Name: Akshat Jaiswal
  Roll No: 21052646
  Section: CSE 37
  WAP to convert a decimanl number to its equivalent binary number using STACKS
  */

#include <stdio.h>
#include <math.h>
#define SIZE 10
int Stack[SIZE], Top = -1;

int main(void)
{
    int num, rem;
    printf("Enter a Number in Decimal: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 2;
        Stack[++Top] = rem;
        num = num / 2;
    }
    printf("The Binary Equivalent: ");
    while (Top != -1)
    {
        printf("%d  ", Stack[Top]);
        Top--;
    }

    return 0;
}