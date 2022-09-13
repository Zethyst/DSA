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
    }
}
    void Merge(struct Node *Head1,struct Node **Head2){
    struct Node *PTR1_Current=NULL,*PTR2_Current=NULL;
    struct Node *PTR1_Next,*PTR2_Next;
    PTR1_Current=Head1;
    PTR2_Current=*Head2;
    while (PTR1_Current!=NULL && PTR2_Current!=NULL)
    {
        PTR1_Next=PTR1_Current->next;
        PTR2_Next=PTR2_Current->next;

        PTR2_Current->next=PTR1_Next;
        PTR1_Current->next=PTR2_Current;
        PTR1_Current=PTR1_Next;
        PTR2_Current=PTR2_Next;
    }

    *Head2=PTR2_Current;

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
    Merge(head1,&head2);
    traversal(head1);
    traversal(head2);

return 0;
}