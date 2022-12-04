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
int height(struct Tree *ptr)
{
    if (ptr==NULL)
    {
        return 0;
    }
    else
    {
        int l_depth=height(ptr->lc);
        int r_depth=height(ptr->rc);

        if (l_depth>r_depth)
        {
            return (l_depth+1);
        }
        else
        {
            return(r_depth+1);
        }
        
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
int main(void)
{
    struct Tree *Root;
    Root = (struct Tree *)malloc(sizeof(struct Tree));
    buildtree(Root);
    printf("\nInorder Traversal:\n");
    INORDER(Root);
    int h = height(Root);
    printf("\nThe Height of the Tree is: %d",h);
    return 0;
}
//END OF LINE