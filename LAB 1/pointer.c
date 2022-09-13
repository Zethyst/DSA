#include <stdio.h>
int main (void)
{
  int i;
  int *j;
  printf("Enter the value of i: ");
  scanf("%d",&i);
  j=&i;
  printf("The value of i is %d\n",i);
  printf("The address of i is %u\n",j);
return 0;
}