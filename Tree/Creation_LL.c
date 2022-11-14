// PROGRAMED BY AKSHAT JAISWAL

#include <stdio.h>
#include <stdlib.h>

struct Tree
{
    int data;
    struct Tree *lc;
    struct Tree *rc;
};
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
void INORDER(struct Tree *ptr)
{
    if (ptr)
    {
        INORDER(ptr->lc);
        printf("%d ", ptr->data);
        INORDER(ptr->rc);
    }
}
void PREORDER(struct Tree *ptr)
{

    if (ptr)
    {
        printf("%d ", ptr->data);
        INORDER(ptr->lc);
        INORDER(ptr->rc);

    }
}
void POSTORDER(struct Tree *ptr)
{
    if (ptr)
    {
        INORDER(ptr->lc);
        INORDER(ptr->rc);
        printf("%d ", ptr->data);
    }
}

int main(void)
{
    struct Tree *Root;
    Root = (struct Tree *)malloc(sizeof(struct Tree));
    buildtree(Root);
    printf("\nInorder Traversal:\n");
    INORDER(Root);
    printf("\nPreorder Traversal:\n");
    PREORDER(Root);
    printf("\nPostorder Traversal:\n");
    POSTORDER(Root);

    return 0;
}
//END OF LINE