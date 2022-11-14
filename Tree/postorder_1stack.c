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
    struct Tree *ptr, *temp;
    ptr = root;
    STACK[TOP] = NULL;
    do // as top is 0 so normal while wont work
    {
        while (ptr != NULL) // loop to traverse to the last node in left direction
        {
            if (ptr->rc != NULL) // if right node is present store it in stack before the current node
            {
                STACK[++TOP] = ptr->rc;
            }
            STACK[++TOP] = ptr;
            ptr = ptr->lc;
        }

        ptr = STACK[TOP--]; // take out one node as current node is null

        // If the popped item has a right child and the
        //  right child is not processed yet, then make sure
        //  right child is processed before root
        // here the right child = top element
        if (ptr->rc == STACK[TOP] && ptr->rc != NULL)
        {
            temp = STACK[TOP]; // Take out the right child
            STACK[TOP] = ptr;  // push the current node/root into stack
            ptr = temp;        // make the right child as current node (basically swapping right and current node)
        }
        else
        {
            printf("%d  ", ptr->data);
            ptr = NULL; // Make current node null after print so that the loop wont be trapped between leaf and null, and take out one more node from stack
        }
    } while (TOP != 0);
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
    printf("\n[ ");
    Postorder(Root);
    printf("]");
    return 0;
}
// END OF LINE