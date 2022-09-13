#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head){
    if(head==NULL){
    printf("NULL");
    exit(0);
    }
    else{
    struct Node *PTR;
    PTR=head;
    while (PTR!=NULL)
    {
        printf("%d -> ",PTR->data);
        PTR=PTR->next;
    }
    printf("NULL");
    }
}
    void Merge(struct Node *Head1,struct Node *Head2){
    struct Node *ptr1,*ptr2;
    ptr1=Head1;
    while (ptr1!=NULL)
    {
        if(ptr1->next==NULL){
        ptr1->next=Head2;
        break;
        }
        ptr1=ptr1->next; 
    }
    ptr1=Head1;
    while (ptr1!=NULL)
    {
        printf("%d -> ",ptr1->data);
        ptr1=ptr1->next;
    }
    printf("NULL");
    
    
}
struct Node *create_First_LL(struct Node **Head){
    char c;
    struct Node *PTR;
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the 1st value of 1st Linked List: ");
    scanf("%d",&New->data);
    fflush(stdin);
    New->next=NULL;
    *Head=New;
    PTR=*Head;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    fflush(stdin);
    while (c=='Y' || c=='y')
    {
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the next value of 1st Linked List: ");
    scanf("%d",&New->data);
    fflush(stdin);
    New->next=NULL;
    PTR->next=New;
    PTR=PTR->next;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    }
}
struct Node *create_Second_LL(struct Node **Head){
    char c;
    struct Node *PTR;
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the 1st value of 2nd Linked List: ");
    scanf("%d",&New->data);
    fflush(stdin);
    New->next=NULL;
    *Head=New;
    PTR=*Head;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    fflush(stdin);
    while (c=='Y' || c=='y')
    {
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the next value of 2nd Linked List: ");
    scanf("%d",&New->data);
    fflush(stdin);
    New->next=NULL;
    PTR->next=New;
    PTR=PTR->next;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    }
}

int main (void){
    struct Node *ptr,*head1,*head2,*head3;
    head1=head2=head3=NULL;
    create_First_LL(&head1);
    create_Second_LL(&head2);
    printf("\nTHE 1ST LINKED LIST: \n");
    traversal(head1);
    printf("\n");
    printf("\nTHE 2ND LINKED LIST: \n");
    traversal(head2);
    printf("\n\nTHE 3RD MERGE LINKED LIST: \n");
    Merge(head1,head2);

return 0;
}