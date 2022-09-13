#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
void traversal(struct Node **head)
{
    struct Node *PTR,*Tail;
    PTR = *head;
    printf("\n\nThe Linked List: \n");
    while(PTR!=NULL){
        printf("%d  ",PTR->data);
        if(PTR->next==NULL)
        Tail=PTR;
        PTR=PTR->next;
    }
    printf("\nNow the Reversed Linked List:\n");
    PTR=Tail;
    while (PTR!=NULL)
    {
        printf("%d  ",PTR->data);
        PTR=PTR->prev;
    }
    
}
void insert_first(struct Node **Head){
    struct Node *PTR,*New;
    PTR=*Head;
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter a value to be inserted at the first position: ");
    scanf("%d",&New->data);
    New->next=*Head;
    New->prev=NULL;
    PTR->prev=New;
    *Head=New;
}
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
void deletion_first(struct Node **Head){
    struct Node *PTR,*TEMP;
    PTR=*Head;
    TEMP=*Head;
    PTR=PTR->next;
    *Head=PTR;
    PTR->prev=NULL;
    free(TEMP);
}
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
printf("\nTHE ORIGINAL LINKED LIST:\n");
traversal(&Head);
insert_first(&Head);
printf("\n\nTHE LINKED LIST AFTER INSERTING ELEMENT AT START:\n");
traversal(&Head);
insert_last(&Head);
printf("\n\nTHE LINKED LIST AFTER INSERTING ELEMENT AT LAST:\n");
traversal(&Head);
deletion_first(&Head);
printf("\n\nTHE LINKED LIST AFTER DELETING ELEMENT AT START:\n");
traversal(&Head);
deletion_last(&Head);
printf("\n\nTHE LINKED LIST AFTER DELETING ELEMENT AT LAST:\n");
traversal(&Head);

return 0;
}