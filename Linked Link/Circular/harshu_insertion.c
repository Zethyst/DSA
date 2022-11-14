 #include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr; 
    ptr=head;
    while(ptr->next!=head)
    {
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("Element is : %d\n",ptr->data);
    ptr=ptr->next;
    printf("Element is : %d\n",ptr->data);
    
}

struct Node *insertAtLast(struct Node *head,int value)
{
struct Node *p=(struct Node*)malloc(sizeof(struct Node));
p->data=value;
struct Node *p1=head;
while(p1->next!=head)
{
    p1=p1->next;
}
p1->next=p;
p->next=head;
return head;
}
struct Node *insertAtIndex(struct Node *head,int data,int index)
{ 
    struct Node *ptr1=(struct Node*)malloc(sizeof(struct Node));
    ptr1->data=data;
    int count;
    struct Node *ptr=head;
    while(count!=index-1)
    {
        ptr=ptr->next;
        count++;

    }
    ptr1->next=ptr->next;
    ptr->next=ptr1;
    return head;
}
struct Node *insertAtFirst(struct Node *head, int data)
    {
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p2= head;
    while(p2->next != head){
        p2 = p2->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p2->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
int main (void)
{
    struct Node *head,*new,*ptr1;
    char c;
    // Allocate memory for nodes in the linked list in Heap
    new=(struct Node *)malloc(sizeof(struct Node));
    head=NULL;
    printf("Enter the value : ");
    scanf("%d",&new->data);
    fflush(stdin);
    new->next=NULL;
    head=new;
    ptr1=head;
    printf("Do you want to add another Node ?");
    scanf("%c",&c);
    fflush(stdin);
    while(c=='Y' || c=='y')
    {
    new=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d",&new->data);
    fflush(stdin);
    new->next=NULL;
    ptr1->next=new;
    ptr1=ptr1->next;
    printf("Do you want to add another Node ?  ");
    scanf("%c",&c);
    fflush(stdin);
    }
    if(c=='N' || c=='n')
    {
     ptr1->next=head;
    }
    printf("Linked list before operation");
    traversal(head);
   printf("\nInsert At last--->\n");
   head=insertAtLast(head,90);
   traversal(head);
    printf("\nInsert At first--->\n");
    head=insertAtFirst(head,100);
    traversal(head);
    printf("\nInsert At index--->\n");
    insertAtIndex(head,90,3);
    traversal(head);
    return 0;
}