#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void PUSH(int **Top, int value)
{
    struct Node *New = (struct Node *)malloc(sizeof(struct Node));
    New->data = value;
    New->next = NULL;
    if (*Top == NULL)
        *Top = New;
    else
    {
        New->next = *Top;
        *Top = New;
    }
}
void POP(struct Node **TOP)
{
    struct Node *Temp, *ptr;
    if (*TOP == NULL)
        printf("STACK UNDERFLOW!");
    else
    {
        Temp = *TOP;
        ptr = *TOP;
        printf("\nPopped Value: %d\n", ptr->data);
        ptr = ptr->next;
        *TOP = ptr;
        free(Temp);
    }
}
void traversal(struct Node *TOP)
{
    struct Node *ptr;
    ptr = TOP;
    while (ptr != NULL)
    {
        printf("%d  -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

int main(void)
{
    struct Node *TOP = NULL, *ptr;
    char ch;
    int value;
    int choice;
    while (1)
    {
        printf("\nPress 1 to check if the STACK is Empty: \n");
        printf("\nPress 2 to Display the contents of the STACK: \n");
        printf("\nPress 3 to Push an element in the STACK: \n");
        printf("\nPress 4 to Pop an element from the STACK: \n");
        printf("\nPress 5 to Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (TOP == NULL)
                printf("\nStack is Empty! \n");
            else
                printf("\nThere are Some Elements. Stack is NOT Empty! \n");

            break;
        case 3:
            printf("\nEnter a value: ");
            scanf("%d", &value);
            fflush(stdin);
            PUSH(&TOP, value);
            break;
        case 2:
            traversal(TOP);
            break;
        case 4:
            POP(&TOP);
        default:
            printf("\nWrong choice!");
        }
    }
        return 0;
}