#include <stdio.h>
#include<stdlib.h>
struct Node{
    char data;
    int priority;
    struct Node *next;
};
int grade_priority(struct Node *ptr)
{
    if(ptr->data=='O')
    return 1;
    if(ptr->data=='E')
    return 2;
    if(ptr->data=='A')
    return 3;
    if(ptr->data=='B')
    return 4;
    if(ptr->data=='C')
    return 5;
    if(ptr->data=='D')
    return 6;

}
struct Node *grade(struct Node *Front)
{
    struct Node *ptr=Front;
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the grade: ");
    scanf("%c",&new->data);
    fflush(stdin);
    new->priority=grade_priority(new);
    printf("Grade: %d",new->priority);
    new->next=NULL;

    if(Front==NULL)
    {
     Front=new;
    }
    else if(ptr->priority>new->priority)
    {
      new->next=Front;
      Front=new;
    }
    else
    {
     while(ptr->next!=NULL && ptr->next->priority<=new->priority)
     {
        ptr=ptr->next;
     }
     new->next=ptr->next;
     ptr->next=new;
    }
    return Front;
}
void traversal(struct Node *Front)
{
    struct Node *ptr=Front;
    while(ptr!=NULL)
    {
        printf("%c ",ptr->data);
        ptr=ptr->next;
    }
}
int main (void)
{
struct Node *Front=NULL;
Front=grade(Front);
Front=grade(Front);
Front=grade(Front);
Front=grade(Front);
printf("\n");
traversal(Front);
return 0;
}