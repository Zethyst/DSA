#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main (void){
    struct node *ptr;
    struct node *start;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    ptr->next=start;
    start=ptr;
    ptr=NULL;

return 0;
}