#include <stdio.h>
void LCM();
int main (void)
{
    int x,y,a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    LCM(x,y);
}
void LCM(int x,int y){
    int a,b;
      a=x;b=y;
    while (a!=b)
        {
            if (a<b)
            a=a+x;
            else
            b=b+y;
        }
        printf("LCM of %d and %d => %d\n",x,y,a);
}