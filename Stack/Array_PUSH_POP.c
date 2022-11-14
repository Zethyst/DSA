#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 4
int Top=-1;
int stack[MAXSIZE];

 void PUSH(int value){
    if(Top==MAXSIZE-1){
        printf("STACK OVERFLOW!");
    
    }
    Top++;
    stack[Top]=value;
    
}
int POP(int Top){
    int Data;
    if(Top==-1){
        printf("STACK UNDERFLOW!");
    
    }
    Data=stack[Top];
    Top--;
    return (Data);
}
int main (void){
int STACK[100],Top=-1,value;
int ch;
while (1)
{
printf("\n----------MENU-----------\n");
printf("\n1. Check if the Stack is Empty or not");
printf("\n2. Display the contents of the Stack");
printf("\n3. Push an element into the Stack");
printf("\n4. Pop an element from the Stack");
printf("\n5. Exit");
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch (ch)
{
case 1:
    if(Top==-1){
        printf("STACK is EMPTY!");
    }
    break;
    case 2:
for (int i = MAXSIZE-1; i >=0; i--)
{
    printf("[ %d ]\n",stack[i]);
}
    break;
case 3:
printf("Enter the value you want to insert into STACK: ");
scanf("%d",&value);
PUSH(value);

break;
case 4:
int popped_value;
popped_value=POP(Top);
printf("\nThe value popped: %d",popped_value);
break;
default:
    printf("\nWrong Choice!");
    break;
}

}

return 0;
}