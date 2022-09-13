#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
void insert_last(struct Node **Head){
    struct Node *PTR,*New;
    PTR=*Head;
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter a value to be inserted at the last position: ");
    scanf("%d",&New->data);
    while(PTR->next!=NULL){
        PTR=PTR->next;
    }
    PTR->next=New;
    New->prev=PTR;
    New->next=NULL;
}
int main (void){
struct Node *PTR,*New,*Head,*Tail;
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
New->prev=NULL;
Head=New;
PTR=Head;
char ch;
printf("Do you want to add another node?\n\n(Y/N): ");
scanf("%c",&ch);
fflush(stdin);
while(ch=='Y' || ch=='y' ){
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
New->prev=PTR;
PTR->next=New;
PTR=PTR->next;
printf("Do you want to add another node?\n\n(Y/N): ");
scanf("%c",&ch);
fflush(stdin);
}
PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    if(PTR->next==NULL)
    Tail=PTR;
    PTR=PTR->next;
}
insert_last(&Head);
PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    if(PTR->next==NULL)
    Tail=PTR;
    PTR=PTR->next;
}

return 0;
}