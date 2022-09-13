#include <stdio.h>
int main (void)
{
  int num,i,count=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if (num == 1 || num == 0)
    goto special;
    if(num%i==0)
    count++;
  }
  if (count==2)
  printf("Number %d is a prime number!",num);
  else
  printf("Number %d is not a prime number!",num);

  return 0;

  special:
  printf("\nSpecial Case!\n");
}