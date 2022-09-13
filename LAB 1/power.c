#include <stdio.h>
#include <math.h>
int main (void)
{
  int x,y,c;
  printf("Enter the value of x: ");
  scanf("%d",&x);
  fflush(stdin);
  printf("Enter the value of y: ");
  scanf("%d",&y);
  c = power(x,y);
  printf("Result: %d",c);
return 0;
}
int power(int x,int y)
{
  int result=1;
  while(y!=0)
  {
   result =result*x;
    y--;
  }
    return result;
}