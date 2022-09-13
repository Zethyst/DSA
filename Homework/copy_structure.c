#include <stdio.h>
#include <stdlib.h>
struct details
{
    char name[100];
    char gender;
    char fave_colour[100];
    int fave_number;
}var1,var2;

int main (void){
// var1=var2;
printf("\nEnter your name: ");
scanf("%s",&var1.name);
fflush(stdin);
printf("\nEnter your gender: ");
scanf("%c",&var1.gender);
fflush(stdin);
printf("\nEnter your fave colour: ");
scanf("%s",&var1.fave_colour);
fflush(stdin);
printf("\nEnter your fave number: ");
scanf("%d",&var1.fave_number);
fflush(stdin);
var2=var1;

printf("\n\nThe Details of variable 1: \n");
printf("\nName: %s",var1.name);
printf("\nGender: %c",var1.gender);
printf("\nFavourite Colour: %s",var1.fave_colour);
printf("\nFavourite Number: %d",var1.fave_number);
printf("\n\nThe Details of variable 2: \n");
printf("\nName: %s",var2.name);
printf("\nGender: %c",var2.gender);
printf("\nFavourite Colour: %s",var2.fave_colour);
printf("\nFavourite Number: %d",var2.fave_number);

return 0;
}