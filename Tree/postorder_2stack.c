// PROGRAMED BY AKSHAT JAISWAL

#include <stdio.h>
#include <stdlib.h>

struct Tree *STACK1[20];
struct Tree *STACK2[20];
int TOP1 = 0;
int TOP2 = 0;

struct Tree
{
    int data;
    struct Tree *rc;
    struct Tree *lc;
};
void Postorder(struct Tree *root)
{
    STACK1[TOP1] = NULL;
    STACK2[TOP2] = NULL;
    struct Tree *ptr;
    ptr = root;
    STACK1[++TOP1] = root;
    while (TOP1 != 0)
    {
        ptr = STACK1[TOP1];
        TOP1--;
        // printf("%d  ", ptr->data);
        STACK2[++TOP2] = ptr;
        if (ptr->lc)
        {
            STACK1[++TOP1] = ptr->lc;
        }
        if (ptr->rc)
        {
            STACK1[++TOP1] = ptr->rc;
        }
    }
}
void traversal()
{
    struct Tree *ptr;
    printf("\nPost Order Traversal => ");
    while (TOP2 != 0)
    {
        ptr = STACK2[TOP2];
        TOP2--;
        printf("%d  ", ptr->data);
    }
    // for (int i = TOP2; i > 0; i--)
    // {
    //     ptr=STACK2[i];
    //     printf("%d ",ptr->data);
    // }
}

void buildtree(struct Tree *ptr)
{
    struct Tree *New;
    char ch;
    printf("\nEnter a value: ");
    scanf("%d", &ptr->data);
    fflush(stdin);
    ptr->lc = NULL;
    ptr->rc = NULL;

    printf("\nDo you want to add a left child of %d ?\n(Y/N): ", ptr->data);
    scanf("%c", &ch);
    fflush(stdin);
    if (ch == 'Y' || ch == 'y')
    {
        New = (struct Tree *)malloc(sizeof(struct Tree));
        ptr->lc = New;
        buildtree(New);
    }
    printf("\nDo you want to add a right child of %d ?\n(Y/N): ", ptr->data);
    scanf("%c", &ch);
    fflush(stdin);
    if (ch == 'Y' || ch == 'y')
    {
        New = (struct Tree *)malloc(sizeof(struct Tree));
        ptr->rc = New;
        buildtree(New);
    }
}
int main(void)
{
    struct Tree *Root;
    Root = (struct Tree *)malloc(sizeof(struct Tree));
    buildtree(Root);
    Postorder(Root);
    traversal();
    return 0;
}
// END OF LINE