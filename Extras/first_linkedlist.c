#include <stdio.h>
struct Node{
    int data;
    struct Node *link;
};
int main (void){
struct Node *head;

struct Node N1,N2,N3;
//Initialising
// N1.data=10;
printf("Enter the value of 1st Node: ");
scanf("%d",&N1.data);
N1.link=&N2;
// N2.data=20;
printf("Enter the value of 2nd Node: ");
scanf("%d",&N2.data);
N2.link=&N3;
// N3.data=30;
printf("Enter the value of 3rd Node: ");
scanf("%d",&N3.data);
N3.link=NULL;
//traversing
head=&N1;
struct Node *ptr;
ptr=head;
while(ptr!=NULL)
{
    printf("%d  ",ptr->data);
    ptr=ptr->link;
}
return 0;
}