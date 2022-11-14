#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5
struct TREE
{
    int data;
    struct TREE *lc, *rc;
};
struct TREE *STACK[SIZE];
int TOP = 0;
struct TREE *INSERT(struct TREE *ptr, int data)
{
    struct TREE *New;
    New = ptr;
    New->data = data;
    New->lc = NULL;
    New->rc = NULL;
}
void buildtree(struct TREE *root, int value)
{
    int data;
    char ch;
    bool done = 0;
    struct TREE *New, *ptr;
    ptr = root;
    ptr->data = value;
    ptr->lc = NULL;
    ptr->rc = NULL;
jump:
    printf("\nDo you want to add another node?\n(Y/N): ");
    scanf("%c", &ch);
    ptr = root;
    fflush(stdin);
    if (ch == 'Y' || ch == 'y')
    {
    again:
        printf("\nEnter the value: ");
        scanf("%d", &data);
        fflush(stdin);
        while (!done)
        {
            if (data > ptr->data)
            {
                printf("R");
                if (ptr->rc == NULL)
                {
                    New = (struct TREE *)malloc(sizeof(struct TREE));
                    ptr->rc = New;
                    ptr->rc = INSERT(New, data);
                    goto jump;
                }
                ptr = ptr->rc;
            }
            else if (data < ptr->data)
            {
                printf("L");
                if (ptr->lc == NULL)
                {
                    New = (struct TREE *)malloc(sizeof(struct TREE));
                    ptr->lc = New;
                    ptr->lc = INSERT(New, data);
                    goto jump;
                }
                ptr = ptr->lc;
            }
            else if (data == value)
            {
                printf("\nWrong Input. Value already exists.\n");
                goto again;
            }
        }
    }
    else
        done = 1;
}
void Inorder(struct TREE *root)
{
    STACK[TOP] = NULL;
    struct TREE *ptr;
    ptr = root;
    bool done = 0;
    while (!done)
    {
        if (ptr != NULL)
        {
            STACK[++TOP] = ptr;
            ptr = ptr->lc;
        }
        else
        {
            if (TOP != 0)
            {
                ptr = STACK[TOP];
                TOP--;
                printf("%d  ", ptr->data);
                ptr = ptr->rc;
            }
            else
                done = 1;
        }
    }
}
int main(void)
{
    int data;
    struct TREE *ROOT;
    ROOT = NULL;
    ROOT = (struct TREE *)malloc(sizeof(struct TREE));

    printf("\nEnter a value: ");
    scanf("%d", &data);
    fflush(stdin);
    buildtree(ROOT, data);
    Inorder(ROOT);
    return 0;
}