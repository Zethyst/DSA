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
void Inorder(struct Tree *root)
{
    STACK[TOP] = NULL;
    struct Tree *ptr;
    ptr = root;
    while (ptr != NULL)
    {
        STACK[++TOP] = ptr;
        ptr = ptr->lc;
    }
    while (TOP != 0)
    {
        ptr = STACK[TOP];
        TOP--;
        printf("%d  ", ptr->data);
        if (ptr->rc != NULL)
        {
            ptr = ptr->rc;
            while (ptr != NULL)
            {
                STACK[++TOP] = ptr;
                ptr = ptr->lc;
            }
        }
    }
}


int main(void)
{
    struct Tree *Root;
    Root = (struct Tree *)malloc(sizeof(struct Tree));
    buildtree(Root);
    printf("\nEnter Two Nodes you want to find LCA of..\nNode 1 => ");
    scanf("%")


    return 0;
}
//END OF LINE