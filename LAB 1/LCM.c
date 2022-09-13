#include <stdio.h>  
  
int lcm();
  
int main()  
{  
    int a, b, result;
    printf(" \n Enter first number: \n ");  
    scanf("%d",&a);
    fflush(stdin);
    printf(" \n Enter second number: \n ");  
    scanf("%d",&b);  
    result = lcm(a,b); 
    printf ( " \n LCM of %d and %d is %d ", a, b, result);  
    return 0;  
}  
  
int lcm ( int x, int y)
{    
    int m = 1; 
    while(1)
    { 
    if ( (m%x == 0) && (m%y == 0))  
    {  
        return m;
        break;  
    }  
    else  
    {  
        m++;  
        lcm(x,y);  
        return m;  
        break;
    }  
  }
}  