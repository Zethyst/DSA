//Q3=Specific Position

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Link;
};


void insert_specific_point(struct Node **Head,int *pos){
    struct Node *New;
    struct Node *PTR;
    New=(struct Node*)malloc(sizeof(struct Node));
    if(New == NULL)
    {
        printf("\nMemory Not Available!\n");
        exit(0);
    }
    else{
    printf("\nEnter the value of New Node to be inserted at the postion: ");
    scanf("%d",&New->data);
    int count=0;
    PTR=*Head;
    while(count < *pos-1){
        count++;
    PTR=PTR->Link;
    }
    New->Link=PTR->Link;
    PTR->Link=New;
    }
}
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
int pos;
printf("\nEnter the postion you want to insert a node: ");
scanf("%d",&pos);
insert_specific_point(&Head,&pos);

PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    PTR=PTR->Link;
}
return 0;
}