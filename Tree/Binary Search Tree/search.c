#include <stdio.h>
#include <stdlib.h>
struct Tree
{
    int data;
    struct Tree *lc;
    struct Tree *rc;
};
struct Tree *NewNode(int item)
{
    struct Tree *New;
    New = (struct Tree *)malloc(sizeof(struct Tree));
    New->data = item;
    New->lc = NULL;
    New->rc = NULL;
    return New;
}
struct Tree *buildtree(struct Tree *ptr, int val)
{
    if (ptr == NULL) /* If the tree is empty, return a new node */
        return (NewNode(val));

    else
    { /* Otherwise, recur down the tree */
        if (val < ptr->data)
        {
            ptr->lc = buildtree(ptr->lc, val);
        }

        if (val > ptr->data)
        {
            ptr->rc = buildtree(ptr->rc, val);
        }
    }
    return ptr;
}
void SEARCH(struct Tree *ptr, int key)
{
    if (ptr == NULL)
        printf("\nValue Not Found!\n");
    else
    {
        if (key < ptr->data)
        {
            SEARCH(ptr->lc, key);
        }
        if (key > ptr->data)
        {
            SEARCH(ptr->rc, key);
        }
        if (key == ptr->data)
        {
            printf("\nSearch Successful !!\n");
        }
    }
}

int main(void)
{
    struct Tree *ROOT = NULL;
    int data, key;
    char ch;
    printf("\nEnter a value: ");
    scanf("%d", &data);
    fflush(stdin);
    ROOT = buildtree(ROOT, data);
    printf("\nDo you want to enter another value?\n(Y/N): ");
    scanf("%c", &ch);
    fflush(stdin);
    while (ch == 'Y' || ch == 'y')
    {
        printf("\nEnter a value: ");
        scanf("%d", &data);
        fflush(stdin);
        buildtree(ROOT, data); // Not updating root here as it would make the last node as root
        printf("\nDo you want to enter another value?\n(Y/N): ");
        scanf("%c", &ch);
        fflush(stdin);
    }
    printf("\n\nEnter the value you want to search: ");
    scanf("%d", &key);
    SEARCH(ROOT, key);
    return 0;
}