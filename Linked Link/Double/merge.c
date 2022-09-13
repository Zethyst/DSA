#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
// void Merge(struct Node *Head1,struct Node *Head2,struct Node *Head3){
//     struct Node *ptr1,*ptr2,*ptr3;
//     ptr1=Head1;
//     ptr2=Head2;
//     ptr3=Head3;
// }
int main (void){
struct Node *PTR,*New,*Head,*Tail;
int count1=0,count2=0,count3=0;
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
    count1++;
    if(PTR->next==NULL)
    Tail=PTR;
    PTR=PTR->next;

}
//Now Second
printf("\nNow starts Second LINKED LIST:\n");
struct Node *PTR2,*New2,*Head2,*Tail2;
New2=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New2->data);
fflush(stdin);
New2->next=NULL;
New2->prev=NULL;
Head2=New2;
PTR2=Head2;
char ch2;
printf("Do you want to add another node?\n\n(Y/N): ");
scanf("%c",&ch2);
fflush(stdin);
while(ch2=='Y' || ch2=='y' ){
New2=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New2->data);
fflush(stdin);
New2->next=NULL;
New2->prev=PTR2;
PTR2->next=New2;
PTR2=PTR2->next;
printf("Do you want to add another node?\n\n(Y/N): ");
scanf("%c",&ch2);
fflush(stdin);
}
PTR2=Head2;
while(PTR2!=NULL){
    printf("%d  ",PTR2->data);
    count2++;
    if(PTR2->next==NULL)
    Tail=PTR2;
    PTR2=PTR2->next;
}
count3=count1+count2;
struct Node *Head3,*New3,*PTR3;
New3=(struct Node*)malloc(count3*sizeof(struct Node));
PTR=Head;
PTR2=Head2;
while(PTR!=NULL){
    PTR3->data=PTR->data;
    PTR3=PTR3->next;
    PTR=PTR->next;
}
while(PTR2!=NULL){
    PTR3->data=PTR2->data;
    PTR3=PTR3->next;
    PTR2=PTR2->next;
}
PTR3->next=NULL;
PTR3=Head;
while (PTR3!=NULL){
    printf("%d",PTR3->data);
    PTR3=PTR3->next;
}
// Merge(Head,Head2,Head3);
return 0;
}