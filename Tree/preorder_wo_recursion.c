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
void Preorder(struct Tree *root)
{
    STACK[TOP] = NULL;
    struct Tree *ptr;
    ptr = root;

    while (TOP != -1)
    {
        if (ptr == NULL && TOP != 0)
        {
            ptr = STACK[TOP--];
        }
        printf("%d  ", ptr->data);

        if (ptr->rc != NULL)
        {
            STACK[++TOP] = ptr->rc;
            ptr = ptr->lc;
        }
        else if (ptr->lc != NULL)
        {
            ptr = ptr->lc;
        }
        else
        {
            ptr = STACK[TOP];
            TOP--;
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