#include <stdio.h>
int main (void){
//char str[]="Writing a program to find the length of the string";
int i;
char str[100];
printf("Input a String: \n");
scanf("%[^\n]s",&str);
for (i = 0; str[i]!='\0' ; ++i)
{}

printf("\nLength of the string is %d",i);

return 0;
}