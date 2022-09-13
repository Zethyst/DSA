#include <stdio.h>
#include <string.h>

int main (void){

char sentence[300],word[100], new_sentence[100][100];
printf("Enter a sentence: \n");
// scanf("%[^\n]s",sentence);
gets(sentence);
fflush(stdin);
printf("\nEnter the word (to be deleted):\n");
// scanf("%s",word);
gets(word);
int i=0,j=0,k=0;
for (i = 0; sentence[i]!='\0'; i++)
{
   if(sentence[i]==' ')
   {
      new_sentence[k][j]='\0';
      k++;
      j=0;
   }
   else
   {
      new_sentence[k][j]=sentence[i];
      j++;
   }
}
new_sentence[k][j]='\0';
j=0;
for (int i = 0; i < k+1; i++)
{
if(!strcmp(new_sentence[i],word))
   new_sentence[i][j]='\0';
}
   printf("\nThe New String: \n");
   j=0;
   for (int i = 0; i < k+1; i++)
   {
   if(new_sentence[i][j]=='\0')
   continue;
   else
   printf("%s ",new_sentence[i]);
   }
return 0;
}