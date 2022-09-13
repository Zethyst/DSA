//Q3 = Alternate Node

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main (void){
struct Node *Head;
struct Node *New;
struct Node *ptr;
char choice;
Head=NULL;
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
Head=New;
ptr=Head;
printf("\nDo you want to add another Node?\n\n(Y/N): ");
scanf("%c",&choice);
while(choice=='Y' || choice =='y'){
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
ptr->next=New;
ptr=ptr->next;
printf("\nDo you want to add another Node?\n\n(Y/N): ");
scanf("%c",&choice);
}
ptr=Head;
int count=0;
while (ptr!=NULL)
{   
    printf("%d  ",ptr->data);
    ptr=(ptr->next)->next;
}
ptr=Head;
while(ptr!=NULL){
    count++;
    ptr=ptr->next;
}
printf("\nNumber of Nodes: %d",count);


return 0;
}