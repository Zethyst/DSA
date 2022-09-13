#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (void){
char word[100][100];
char str[100],temp[100];
int a,i,j,k,n=0,c,len;
char ch;
printf("Enter a sentence and terminate with a full stop: \n");
scanf("%[^\n]s",str);
for (int i = 0; i < strlen(str); i++)
{
    str[i]=tolower((unsigned char)str[i]);
}
printf("%s",str);
len=strlen(str);
for ( a = 0; a < len; a++)
{
    if(str[i]!=' ' && str[i]!='.')
    temp[i]=str[i];
    else{
        word[n++]=temp;
        temp="";
    }
}


return 0;
}