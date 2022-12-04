
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *Creation(struct Node *Head)
{
    struct Node *New;
    struct Node *ptr;
    char choice;
    Head = NULL;
    New = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter a value: ");
    scanf("%d", &New->data);
    fflush(stdin);
    New->next = NULL;
    Head = New;
    ptr = Head;
    printf("\nDo you want to add another Node?\n\n(Y/N): ");
    scanf("%c", &choice);
    while (choice == 'Y' || choice == 'y')
    {
        New = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a value: ");
        scanf("%d", &New->data);
        fflush(stdin);
        New->next = NULL;
        ptr->next = New;
        ptr = ptr->next;
        printf("\nDo you want to add another Node?\n\n(Y/N): ");
        scanf("%c", &choice);
    }
    return (Head);
}
void display(struct Node *Head)
{
    struct Node *ptr;
    ptr = Head;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}
void insert_start(struct Node **Head, int min)
{
    struct Node *New;
    New = (struct Node *)malloc(sizeof(struct Node));
    if (New == NULL)
    {
        printf("\nMemory Not Available!\n");
        exit(0);
    }
    else
    {
        New->data = min;
        New->next = *Head;
        *Head = New;
    }
}
void insert_end(struct Node **Head, int max)
{
    struct Node *New;
    struct Node *Last;
    New = (struct Node *)malloc(sizeof(struct Node));
    if (New == NULL)
    {
        printf("\nMemory Not Available!\n");
        exit(0);
    }
    else
    {
        New->data = max;
        New->next = NULL;
        if (*Head == NULL)
        {
            *Head = New;
        }
        else
        {
            Last = *Head;
            while (Last->next != NULL)
            {
                Last = Last->next;
            }
            Last->next = New;
        }
    }
}
void delete_specific_point(struct Node **Head, int pos)
{
    struct Node *PTR, *TEMP;
    int count = 1;
    PTR = *Head;
    while (PTR->next->data != pos)
    {
        PTR = PTR->next;
    }
    TEMP = PTR->next;
    PTR->next = TEMP->next;
    free(TEMP);
}
int Min(struct Node *Head)
{
    struct Node *ptr, *ptr2;
    ptr = Head;
    ptr2 = ptr->next;
    int min = ptr->data;
    while (ptr != NULL)
    {
        while (ptr2 != NULL)
        {
            if (ptr2->data < ptr->data)
            {
                min = ptr2->data;
            }
            ptr2 = ptr2->next;
        }

        ptr = ptr->next;
    }
    return (min);
}
int Max(struct Node *Head)
{
    struct Node *ptr, *ptr2;
    ptr = Head;
    ptr2 = ptr->next;
    int max = ptr->data;
    while (ptr != NULL)
    {
        while (ptr2 != NULL)
        {
            if (ptr2->data > ptr->data)
            {
                max = ptr2->data;
            }
            ptr2 = ptr2->next;
        }

        ptr = ptr->next;
    }
    return (max);
}

int main(void)
{
    int min, max;
    struct Node *Head = NULL;
    struct Node *ptr;
    Head = Creation(Head);
    display(Head);
    min = Min(Head);
    printf("\nMininum Element is: %d", min);
    max = Max(Head);
    printf("\nMaxinum Element is: %d", max);
    printf("\n");
    delete_specific_point(&Head, min);
    delete_specific_point(&Head, max);
    printf("\n");
    insert_start(&Head, min);
    insert_end(&Head, max);
    display(Head);
    return 0;
}