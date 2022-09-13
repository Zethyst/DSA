#include <stdio.h>

int add();
int sub();
int mul();
int div();
int main (void)
{
  int a,b;
  printf("Enter the first number: ");
  scanf ("%d",&a);
  fflush(stdin);
  printf("Enter the second number: ");
  scanf ("%d",&b);
  int p=add(a,b);
  printf("Addition : %d\n",p);
  int q=sub(a,b);
  printf("Subtraction : %d\n",q);
  int s=mul(a,b);
  printf("Multiplication : %d\n",s);
  int t=div(a,b);
  printf("Division : %d\n",t);
return 0;
}
int add(int x,int y)
{
  int result = x+y;
  return result;
}
int sub(int x,int y)
{
  int result = x-y;
  return result;
}
int mul(int x,int y)
{
  int result = x*y;
  return result;
}
int div(int x,int y)
{
  int result = x/y;
  return result;
}