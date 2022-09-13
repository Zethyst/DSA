#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
void deletion_last(struct Node **Head){
    struct Node *PTR,*TEMP;
    PTR=*Head;
    while(PTR->next!=NULL){
        PTR=PTR->next;
    }
        TEMP=PTR;
        PTR=PTR->prev;
        PTR->next=NULL;
        free(TEMP);
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
deletion_last(&Head);
printf("\nThe Modified LINKED LIST: \n");
PTR=Head;
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    if(PTR->next==NULL)
    Tail=PTR;
    PTR=PTR->next;
}

return 0;
}