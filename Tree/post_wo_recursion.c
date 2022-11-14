// PROGRAMED BY AKSHAT JAISWAL

#include <stdio.h>
#include <stdlib.h>

struct Tree *STACK[20];
int TOP = 0;

struct Tree
{
    int data;
    struct Tree *rc;
    struct Tree *lc;
};
void Postorder(struct Tree *root)
{
    STACK[TOP] = NULL;
    struct Tree *ptr;
    ptr = root;
    while (ptr != NULL)
    {
        right:
        STACK[++TOP] = ptr;
        if (ptr->rc != NULL)
        {
            STACK[++TOP] = -ptr->rc->data;
        }
        ptr = ptr->lc;
    }
    ptr = STACK[TOP];
    TOP--;
    while (ptr->data > 0)
    {
        printf("%d  ", ptr->data);
        ptr =STACK[TOP];
        TOP--;
    }
    if(ptr->data<0)
    {
        ptr=-(ptr->data);
        goto right;
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
    Postorder(Root);
    return 0;
}
// END OF LINE