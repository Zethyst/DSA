#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int co;
    int ex;
    struct Node *next;
};
struct Node *create(struct Node *head)
{
    struct Node *New, *PTR;
    char ch;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter coeffient value: ");
    scanf("%d", &New->co);
    fflush(stdin);
    printf("\nEnter exponent value: ");
    scanf("%d", &New->ex);
    fflush(stdin);
    New->next = NULL;
    head = New;
    PTR = head;
    printf("\nDo you want to create another Node?\n(Y/N): ");
    scanf("%c", &ch);
    while (ch == 'Y' || ch == 'y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter coeffient value: ");
        scanf("%d", &New->co);
        fflush(stdin);
        printf("\nEnter exponent value: ");
        scanf("%d", &New->ex);
        fflush(stdin);
        New->next = NULL;
        PTR->next = New;
        PTR = PTR->next;
        printf("Do you want to add another node?\n(Y/N): ");
        scanf("%c", &ch);
    }
    return (head);
};
struct Node *insert(struct Node *head,int co,int ex){
    struct Node *New,*PTR;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->co=co;
    New->ex=ex;
    New->next=NULL;

    if(head==NULL){
        head=New;
    }
    else
    {
        PTR=head;
        while (PTR->next!=NULL)
        {
            PTR=PTR->next;
        }
        PTR->next=New;
    }
    return(head);
}
void display(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("+ %dx^%d ", ptr->co, ptr->ex);
        ptr = ptr->next;
    }
}
int main(void)
{
   
    
    struct Node *Head1, *Head2, *Head3;
    struct Node *PTR1,*PTR2,*New;
    Head1=NULL;
    Head2=NULL;
    Head3=NULL;

    printf("\n\nThe First Polynomial: ");
    Head1 = create(Head1);
    display(Head1);
    printf("\n\nThe Second Polynomial: ");
    Head2 = create(Head2);
   display(Head2);
    PTR1=Head1;
    PTR2=Head2;
    while (PTR1!=NULL && PTR2!=NULL)
    {
        if(PTR1->ex==PTR2->ex){
            Head3=insert(Head3,PTR1->co+PTR2->co,PTR1->ex);
            PTR1=PTR1->next;
            PTR2=PTR2->next;
        }
        else if (PTR1->ex > PTR2->ex)
        {
            Head3=insert(Head3,PTR1->co,PTR1->ex);
            PTR1=PTR1->next;
        }
        else
        {
            Head3=insert(Head3,PTR2->co,PTR2->ex);
            PTR2=PTR2->next;
        }
    }
    while (PTR2!=NULL)
    {
            Head3=insert(Head3,PTR2->co,PTR2->ex);
            PTR2=PTR2->next;
    }
    while (PTR1!=NULL)
    {
            Head3=insert(Head3,PTR1->co,PTR1->ex);
            PTR1=PTR1->next;
    }
    
    display(Head3);
    return 0;
}
