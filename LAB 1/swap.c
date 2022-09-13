#include <stdio.h>
swap();
int main (void)
{
  int a,b,c;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  fflush(stdin);
  printf("Enter the value of b: ");
  scanf("%d",&b);
  printf("The value of a & b = %d & %d \n",a,b);
  swap(&a,&b);
  printf("\nAfter Swapping\n");
  printf("The value of a & b = %d & %d \n",a,b);
  return 0;
}
swap (int *x,int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
