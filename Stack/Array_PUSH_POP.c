#include <stdio.h>
#include <stdlib.h>
//  void PUSH(int *STACK[100],int Top,int Maxsize,int value){
//     if(Top==Maxsize){
//         printf("STACK OVERFLOW!");
//         exit(0);
//     }
//     Top++;
//     STACK[Top]=value;
    
// }
int POP(int  stack[100],int Top){
    int Data;
    if(Top==-1){
        printf("STACK UNDERFLOW!");
        exit(0);
    }
    Data=stack[Top];
    Top--;
    return Data;
}
int main (void){
int STACK[100],Top=-1,Maxsize,value;
printf("Enter the size of the STACK: ");
scanf("%d",&Maxsize);
printf("Enter the elements in the STACK: ");
Top=0;
for (int i = Top; i < Maxsize-1; i++)
{   
    scanf("%d",&STACK[i]);
    Top++;
}

printf("Enter the value you want to insert into STACK: ");
scanf("%d",&value);

STACK[Top]=value;

// PUSH(&STACK,Top,Maxsize,value);

for (int i = 0; i < Maxsize; i++)
{
    printf("%d  ",STACK[i]);
}
int popped_value;
popped_value=POP(STACK,Top);
printf("\nThe value popped: %d",popped_value);
return 0;
}