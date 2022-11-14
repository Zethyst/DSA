#include <iostream>
using namespace std;
#define SIZE 5
int STACK1[SIZE];
int STACK2[SIZE];
int TOP1 = -1;
int TOP2 = -1;
int TOP3 = 0;

void POP()
{
    if (TOP1 == -1)
    {
        printf("\nSTACK UNDERFLOW!");
    }
    else
    {
        STACK2[++TOP2] = STACK1[TOP3--];
    }
}
void PUSH(int data)
{
    if (TOP1 == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW!");
    }
    else
    {
        STACK1[++TOP1] = data;
        STACK1[++TOP3] = data;

        STACK2[++TOP2] = STACK1[TOP1--];
    }
    
}
void display()
{
    for (int i = 0; i < TOP3; i++)
    {
        printf("%d ", STACK1[i]);
    }
    printf("\n");
    for (int i = 0; i <= TOP2; i++)
    {
        printf("%d ", STACK2[i]);
    }
}

int main(void)
{
    int ch,val;
    while (1)
    {
        printf("\n1. Push an element into the stack");
        printf("\n2. Pop an element from the stack");
        printf("\n3. Display the contents of the stack");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        if (ch==1)
        {
            printf("\nEnter the value: ");
            scanf("%d",&val);
            PUSH(val);
        }
        if (ch==2)
        {
            POP();
        }
        if (ch==3)
        {
            display();
        }
        if (ch==4)
        {
            exit(0);
        }
        
        
        

    }



    return 0;
}