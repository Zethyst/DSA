#include <stdio.h>
#include <math.h>
int main (void){
    int x1,x2,y1,y2,x,y;
    float distance;
printf("Enter 1st cordinate: \n");
printf("x1: ");
scanf("%d",&x1);                    
printf("y1: ");
scanf("%d",&y1);                    
                   
printf("Enter 2nd cordinate: \n");
printf("x2: ");
scanf("%d",&x2); 
printf("y2: ");
scanf("%d",&y2);

x=x2-x1;
y=y2-y1;

distance=sqrt((x*x)+(y*y));
printf("Distance between two points: %.2f",distance);
return 0;
}