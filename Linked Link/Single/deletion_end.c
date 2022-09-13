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
delete_end(&Head);

    struct Node *prev;
    PTR=Head;
    prev=NULL;
    while(PTR->Link!=NULL){
        prev=PTR;
        PTR=PTR->Link;
    }
    prev->Link=NULL;
PTR=Head;
printf("\nAfter Deletion: \n");
while(PTR!=NULL){
    printf("%d  ",PTR->data);
    PTR=PTR->Link;
}

return 0;
}
void delete_end(struct Node *Head){
    struct Node *ptr;
 

}
