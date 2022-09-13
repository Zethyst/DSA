#include <stdio.h>
int main (void)
{
  int a,b,c;
  int *x=&a,*y=&b;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  fflush(stdin);
  printf("Enter the value of b: ");
  scanf("%d",&b);
  c=*x+*y;
  printf("The addition: %d",c);
return 0;
}