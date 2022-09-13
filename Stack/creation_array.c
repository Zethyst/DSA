#include <stdio.h>
int main (void){
int STACK[5],MAXSIZE=4,TOP=-1;
TOP++;
STACK[TOP]=7;
TOP++;
STACK[TOP]=5;
TOP++;
STACK[TOP]=2;
TOP++;
STACK[TOP]=1;
TOP++;
STACK[TOP]=9;
for (int i = 0; i < 10; i++)
{
    printf("%d  ",STACK[i]);
    TOP--;
    if(TOP==-1)
    exit(0);
}


return 0;
}