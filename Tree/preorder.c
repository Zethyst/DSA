// PROGRAMED BY AKSHAT JAISWAL

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Tree *STACK[20];
int TOP = 0;

struct Tree
{
    int data;
    struct Tree *rc;
    struct Tree *lc;
};
void Preorder(struct Tree *root)
{
    STACK[TOP] = NULL;
    struct Tree *ptr;
    ptr = root;
    // bool done = 0;
    STACK[++TOP] = root;
    while (TOP != 0)
    {
        ptr = STACK[TOP];
        TOP--;
        printf("%d  ", ptr->data);
        if (ptr->rc)
        {
            STACK[++TOP] = ptr->rc;
        }
        if (ptr->lc)
        {
            STACK[++TOP] = ptr->lc;
        }
    }
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
    Preorder(Root);
    return 0;
}
// END OF LINE