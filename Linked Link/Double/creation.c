#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
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
PTR=NULL;
PTR=Tail;
printf("\nNow Revered: \n");
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    PTR=PTR->prev;
}


return 0;
}