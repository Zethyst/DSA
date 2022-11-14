// Descending Priority QUEUE
/*Name: Akshat Jaiswal
  Section: CSE - 37
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    int Priority;
    struct Node *next;
};
void isEmpty(struct Node *front)
{
    if (front == NULL)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE is NOT Empty");
}
void Traversal(struct Node *front)
{
    struct Node *ptr;
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\nTheir Priorities=> \n");
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->Priority);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void ENQUEUE(struct Node **front, int d, int p)
{
    struct Node *New, *ptr;
    ptr = *front;
    New = (struct Node *)malloc(sizeof(struct Node)); // create a new node
    New->info = d;
    New->Priority = p;
    New->next = NULL;

    if (*front == NULL) // for first insertion
    {
        *front = New;
    }
    else if (ptr->Priority < New->Priority) // what if the new node has a higher priority than old one?
    {
        New->next = *front;
        *front = New; // make it the first
    }
    else
    { // Traverse the list and find a position to insert new node
        while (ptr->next != NULL && ptr->next->Priority > New->Priority)
        {
            ptr = ptr->next;
        }
        New->next = ptr->next; // Either at the end of the list or at required position
        ptr->next = New;
    }
}
int DEQUEUE(struct Node **front)
{
    struct Node *temp;
    if (*front == NULL)
    {
        printf("\nUNDERFLOW!");
        return (0);
    }
    else
    {
        temp = *front;
        *front = (*front)->next;
    }
    printf("\nThe Value Deleted is: %d", temp->info);
    free(temp);
    return 0;
}
void SEARCH(struct Node *front, int value)
{
    struct Node *ptr;
    ptr = front;
    int count = 0, flag = 0;
    while (ptr != NULL)
    {
        count++;
        if (ptr->info == value)
        {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1)
        printf("\nThe Element was found successfully on position number %d", count);
    else
        printf("\nThe Element was NOT found!");
}
void PEEK(struct Node *front)
{
    if (front != NULL)
        printf("\nThe Topmost Element: %d\n", front->info);
    else
        printf("\nQUEUE IS EMPTY !\n");
}
int main(void)
{
    struct Node *front;
    front = NULL;
    int ch, val, popped, priority;
    while (1)
    {
        printf("\n1. Check if the Priority Queue is Empty");
        printf("\n2. Display the Contents of the Priority Queue");
        printf("\n3. Insert an element in the Priority Queue");
        printf("\n4. Delete an element from the Priority Queue");
        printf("\n5. Display the top element of the Priority Queue");
        printf("\n6. Search an element from the Priority Queue");
        printf("\n7. Display the size of the Priority Queue");
        printf("\n8. Exit");
        printf("\n\nEnter: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            isEmpty(front);
            break;
            return 0;
        case 2:
            Traversal(front);
            break;
        case 3:
            printf("\nEnter the value: ");
            scanf("%d", &val);
            printf("\nEnter the priority of the value: ");
            scanf("%d", &priority);
            ENQUEUE(&front, val, priority);
            break;
        case 4:
            DEQUEUE(&front);
            break;
        case 5:
            PEEK(front);
            break;
        case 6:
            printf("\nEnter the element you want to search: ");
            scanf("%d", &val);
            SEARCH(front, val);
            break;
        case 7:
            struct Node *ptr;
            ptr = front;
            int count = 0;
            while (ptr != NULL)
            {
                count++;
                ptr = ptr->next;
            }
            printf("\nThe Size of the QUEUE is: %d", count);
            break;
        case 8:
            exit(0);
        default:
            printf("\nIt's a Wrong Choice, You Blind!");
        }
    }
    return 0;
}