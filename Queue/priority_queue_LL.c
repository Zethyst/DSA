#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    int Priority;
    struct Node *next;
};
void isEmpty(struct Node *front, struct Node *rear)
{
    if (front == NULL && rear == NULL)
        printf("\nQUEUE IS EMPTY!\n");
    else
        printf("\nQUEUE is NOT Empty");
}
void Traversal(struct Node *front, struct Node *rear)
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
void ENQUEUE(struct Node **front, struct Node **rear, int d, int p)
{
    struct Node *New, *link, *ptr, *ptr2; // ptr2 for comparing the next node of ptr
    ptr = *front;
    link = *front;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->info = d;
    New->Priority = p;
    New->next = NULL;
    if (*front == NULL && *rear == NULL) // for first insertion
    {
        *front = New;
        *rear = New;
    }
    else if (New->Priority < ptr->Priority) // what if the new node has a lower priority than old one?
    {
        New->next = link;
        *front = New; // make it the first
    }
    else
    {
        while (New->Priority != ptr->Priority) // for 2nd time onwards check if the all the nodes have unequal priorities or not then where it stops insert a node there
        {
            if (ptr->next == NULL)
                break;
            ptr = ptr->next;
        }
        ptr2 = ptr->next;
        if (ptr2 != NULL) // what if the 2nd node is NUll? Check otherwise the program will crash
        {
            while (ptr->Priority == ptr2->Priority) // until we arrived on the end of the equal priority node
            {
                ptr = ptr->next;
                ptr2 = ptr2->next;
            }
        }
        New->next = ptr->next; // create links
        ptr->next = New;
    }
}
int DEQUEUE(struct Node **front, struct Node **rear)
{
    struct Node *temp, *link;
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
void SEARCH(struct Node *front, struct Node *rear, int value)
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
    printf("\nThe Topmost Element: %d", front->info);
}
int main(void)
{
    struct Node *front, *rear;
    front = NULL;
    rear = NULL;
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
            isEmpty(front, rear);
            break;
            return 0;
        case 2:
            Traversal(front, rear);
            break;
        case 3:
            printf("\nEnter the value: ");
            scanf("%d", &val);
            printf("\nEnter the priority of the value: ");
            scanf("%d", &priority);
            ENQUEUE(&front, &rear, val, priority);
            break;
        case 4:
            DEQUEUE(&front, &rear);
            break;
        case 5:
            PEEK(front);
            break;
        case 6:
            printf("\nEnter the element you want to search: ");
            scanf("%d", &val);
            SEARCH(front, rear, val);
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