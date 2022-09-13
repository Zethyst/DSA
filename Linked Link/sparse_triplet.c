#include <stdio.h>
#include <stdlib.h>
struct Node{
    int value;
    int row;
    int col;
    struct Node *next;
};
struct Node *create(struct Node **Head){
    char c;
    struct Node *PTR;
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the row value of Linked List: ");
    scanf("%d",&New->row);
    printf("Enter the col value of Linked List: ");
    scanf("%d",&New->col);
    printf("Enter the value of Linked List: ");
    scanf("%d",&New->value);
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
    printf("Enter the row value of Linked List: ");
    scanf("%d",&New->row);
    printf("Enter the col value of Linked List: ");
    scanf("%d",&New->col);
    printf("Enter the value of Linked List: ");
    scanf("%d",&New->value);
    fflush(stdin);
    New->next=NULL;
    PTR->next=New;
    PTR=PTR->next;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    }
}
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
        printf("%d ",PTR->row);
        printf("%d ",PTR->col);
        printf("%d ",PTR->value);
        printf(" -> ");
        PTR=PTR->next;
    }
    printf("NULL");
    }
}
void triplet(struct Node *head){
    struct Node *PTR;
    int count=0;
    PTR=head;
    while (PTR!=NULL)
    {   
        if(PTR->value!=0)
        count++;
        PTR=PTR->next;
    }
    printf("\nNumber of Non-zero Elements: %d",count);
}
void create_LL(struct Node *head){
    int mat1[100][100], mat2[100][100], m, n, p, q, count1 = 0, count2 = 0;
    printf("Enter the number of rows of the 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the 1st matrix: ");
    scanf("%d", &n);
    printf("Enter the elements in the 1st matrix: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);


    printf("\nElements in the 1st matrix are:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", mat1[i][j]);
        printf("\n");
    }

    
}
int main(void){
    struct Node *Head;
    Head=NULL;
    create(&Head);
    traversal(Head);
    triplet(Head);

    
    
}