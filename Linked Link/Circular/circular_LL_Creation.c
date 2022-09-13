//Q6 = Circular

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main (void){
struct Node *Head;
struct Node *New;
struct Node *ptr,*ptr2;
char choice;
Head=NULL;
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
Head=New;
ptr=Head;
printf("\nDo you want to add another Node?\n\n(Y/N): ");
scanf("%c",&choice);

while(choice=='Y' || choice =='y'){
New=(struct Node*)malloc(sizeof(struct Node));
printf("Enter a value: ");
scanf("%d",&New->data);
fflush(stdin);
New->next=NULL;
ptr->next=New;
ptr=ptr->next;
printf("\nDo you want to add another Node?\n\n(Y/N): ");
scanf("%c",&choice);
}
ptr=Head;
int count=0;
while (ptr!=NULL)
{
    printf("%d  ",ptr->data);
    count++;
    ptr=ptr->next;
}
printf("\nNumber of Nodes: %d\n",count);
ptr=Head;
while(ptr!=Head){
    printf("%d  ",ptr->data);
    ptr=ptr->next;
    if(ptr==NULL){
    // printf("%d  ",ptr->data);
    // ptr2=ptr->next;
    ptr->next=Head;
    ptr=ptr->next;
    // printf("%d  ",ptr2->data);
    printf("%d  ",ptr->data);   
    }

}



return 0;
}
// void insert_first(struct node **Head)
// {
//     struct Node *New,*PTR;
//     New=(struct Node*)malloc(sizeof(struct Node));
//     printf("Enter the value you want to insert at first place: ");
//     scanf("%d",&New->data);
//     PTR=Head;
//     while (PTR!=Head)
//     {
//         PTR=PTR->next;
//     }
//     New->next=PTR->next;
//     Head=New;
// }
// void insert_last(struct node **Head)
// {
//     struct Node *New,*PTR;
//     New=(struct Node*)malloc(sizeof(struct Node));
//     printf("Enter the value you want to insert at first place: ");
//     scanf("%d",&New->data);
//     New->next=Head;
//     PTR=Head;
//     while (PTR->next!=Head)
//     {
//         PTR=PTR->next;
//     }
//     New->next=PTR->next;
//     Head=New;
// }