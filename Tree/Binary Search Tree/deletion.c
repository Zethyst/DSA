//PROGRAMMED BY AKSHAT JAISWAL

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
struct Tree *MAXSEARCH(struct Tree *ptr)
{
    if (ptr == NULL)
    {
        printf("\nValue Not Found!\n");
        return NULL;
    }

    while (ptr->rc != NULL)
    {
        ptr = ptr->rc;
    }
    printf("\nThe Maximum Element: %d", ptr->data);
    return ptr;
}
struct Tree *DELETE(struct Tree *ptr, int key)
{
    struct Tree *Temp = NULL;
    if (ptr == NULL)
    {
        printf("\nNo Node to Delete!\n");
    }
    else
    {
        if (key < ptr->data)
        {
            ptr->lc = DELETE(ptr->lc, key);
        }
        if (key > ptr->data)
        {
            ptr->rc = DELETE(ptr->rc, key);
        }
        if (ptr->data == key)
        {
            if (ptr->rc == NULL && ptr->lc!=NULL)
            {
                Temp = ptr->lc;
                free(ptr);
                return Temp;
            }
            if (ptr->lc == NULL && ptr->rc!=NULL)
            {
                Temp = ptr->rc;
                free(ptr);
                return Temp;
            }
            if (ptr->rc == NULL && ptr->lc == NULL)
            {
                Temp = ptr;
                free(Temp);
            }
            if (ptr->lc && ptr->rc)
            {
                Temp = MAXSEARCH(ptr->lc);
                ptr->data = Temp->data;
                ptr->lc = DELETE(ptr->lc, Temp->data);
                // free(Temp);
            }
        }
    }
    return ptr;
}
void SEARCH(struct Tree *ptr, int key)
{
    if (ptr == NULL)
    {
        printf("\nValue Not Found!\n");
        return;
    }
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
void INORDER(struct Tree *ptr)
{
    if (ptr)
    {
        INORDER(ptr->lc);
        printf("%d ", ptr->data);
        INORDER(ptr->rc);
    }
    
}
void MINSEARCH(struct Tree *ptr)
{
    if (ptr == NULL)
    {
        printf("\nValue Not Found!\n");
        return;
    }
    else if (ptr->lc == NULL)
    {
        printf("\nThe Minimum Element: %d", ptr->data);
    }
    else
    {
        MINSEARCH(ptr->lc);
    }
}

int main(void)
{
    struct Tree *ROOT = NULL;
    int data, key, choice;
    char ch;
    while (1)
    {
        printf("\n-----------MENU----------");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Find Maximum Element");
        printf("\n5. Find Minimum Element");
        printf("\n6. Search any value");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

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
               ROOT= buildtree(ROOT, data); // Not updating root here as it would make the last node as root
                printf("\nDo you want to enter another value?\n(Y/N): ");
                scanf("%c", &ch);
                fflush(stdin);
            }
            break;
        case 2:
            printf("\nEnter the value to be deleted: ");
            scanf("%d", &key);
            ROOT = DELETE(ROOT, key);
            break;
        case 3:
            printf("\nThe Inorder Traversal => ");
            INORDER(ROOT);
            break;
        case 4:
            MAXSEARCH(ROOT);
            break;
        case 5:
            MINSEARCH(ROOT);
            break;
        case 6:
            printf("\n\nEnter the value you want to search: ");
            scanf("%d", &key);
            SEARCH(ROOT, key);
            break;
        case 7:
            exit(0);
        default:
            printf("\nWrong Input!\n");
        }
    }
    return 0;
}
//End of Line