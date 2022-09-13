#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Link;
};


int main (void){
struct Node *Head;
struct Node *New;
struct Node *PTR;
Head=NULL;
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the value: ");
scanf("%d",&New->data);
fflush(stdin);
New->Link=NULL;
Head=New;
PTR=Head;
char choice;
printf("Do you want to create another node\n\n(Y/N): ");
scanf("%c",&choice);
fflush(stdin);
while(choice=='Y' || choice=='y') {
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the value: ");
scanf("%d",&New->data);
fflush(stdin);
New->Link=NULL;
PTR->Link=New;
PTR=PTR->Link;
printf("Do you want to create another node\n\n(Y/N): ");
scanf("%c",&choice);
fflush(stdin);
}
PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    PTR=PTR->Link;
}
insert_end(&Head);

PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    PTR=PTR->Link;
}
return 0;
}
void insert_end(struct Node **Head){
    struct Node *New;
    struct Node *Last;
    New=(struct Node*)malloc(sizeof(struct Node));
    if(New == NULL)
    {
        printf("\nMemory Not Available!\n");
        exit(0);
    }
    else{
    printf("\nEnter the value of New Node to be inserted at end: ");
    scanf("%d",&New->data);
    New->Link=NULL;
    if(*Head == NULL){
        *Head=New;
    }
    else
    {
        Last=*Head;
        while(Last->Link!=NULL){
            Last=Last->Link;
        }
        Last->Link=New;
    }
    
    }
}