#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *traversal(struct Node **head)
{
    struct Node *ptr=*head;
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
struct Node *insertAtFirst(struct Node **head,int data)
{
    struct Node *ptr=*head;
    struct Node *New = (struct Node*)malloc(sizeof(struct Node));
    New->prev=NULL;
    New->data=data;
    New->next=*head;
    ptr->prev=New;
    *head=New;
    return (*head);
}
int main (void)
{
int value;
struct Node *head=NULL;
struct Node *first=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
head=first;
first->data=5;
first->prev=NULL;
first->next=second;
second->prev=first;
second->data=7;
second->next=third;
third->prev=second;
third->data=11;
third->next=fourth;
fourth->prev=third;
fourth->data=22;
fourth->next=NULL;
printf("Enter the data to be inserted at first: ");
scanf("%d",&value);
head=insertAtFirst(&head,value);
traversal(&head);
return 0;
}