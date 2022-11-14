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
while (TOP!=-1)
{
    printf("%d  ",STACK[TOP]);
    TOP--;
}

return 0;
}