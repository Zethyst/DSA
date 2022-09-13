#include <stdio.h>

struct Node
{
    int value;
    int row;
    int col;
    struct Node *next;
}; 
int main(void)
{
    int mat1[100][100], mat2[100][100], m, n, p, q, count1 = 0, count2 = 0;
    printf("Enter the number of rows of the 1st matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the 1st matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows of the 2nd matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of the 2nd matrix: ");
    scanf("%d", &q);
    printf("Enter the elements in the 1st matrix: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the elements in the 2nd matrix: ");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &mat2[i][j]);

    printf("\nElements in the 1st matrix are:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d  ", mat1[i][j]);
        printf("\n");
    }
    printf("\nElements in the 2nd matrix are:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d  ", mat2[i][j]);
        printf("\n");
    return 0;
}
}
    struct Node *create_First_LL(struct Node * *Head)
    {
        char c;
        struct Node *PTR;
        struct Node *New = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the 1st value of 1st Linked List: ");
        scanf("%d", &New->value);
        fflush(stdin);
        New->next = NULL;
        *Head = New;
        PTR = *Head;
        printf("Do you want to insert Another Node?\n(Y/N) : ");
        scanf("%c", &c);
        fflush(stdin);
        while (c == 'Y' || c == 'y')
        {
            struct Node *New = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter the next value of 1st Linked List: ");
            scanf("%d", &New->value);
            fflush(stdin);
            New->next = NULL;
            PTR->next = New;
            PTR = PTR->next;
            printf("Do you want to insert Another Node?\n(Y/N) : ");
            scanf("%c", &c);
        }
    }
struct Node *create_Second_LL(struct Node **Head){
    char c;
    struct Node *PTR;
    struct Node *New=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the 1st value of 2nd Linked List: ");
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
    printf("Enter the next value of 2nd Linked List: ");
    scanf("%d",&New->value);
    fflush(stdin);
    New->next=NULL;
    PTR->next=New;
    PTR=PTR->next;
    printf("Do you want to insert Another Node?\n(Y/N) : ");
    scanf("%c",&c);
    }
}
