#include <stdio.h>
struct Node{
    int data;
    struct Node *link;
};
int main (void){
    struct Node N1,N2,N3;
    struct Node *Head;
    Head=&N1;
    N1.data=10;
    N1.link=&N2;
    N2.data=20;
    N2.link=&N3;
    N3.data=30;
    N3.link=NULL;
    struct Node *ptr;
    ptr=Head;
     while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
     }


return 0;
}