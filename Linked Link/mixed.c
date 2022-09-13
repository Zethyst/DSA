#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void display(struct node **head)
{
	if(*head==NULL)
	printf("empty list");
	return ;
	struct node*ptr =*head;
	while(ptr!=NULL)
	{
		printf("%d  ->",ptr->data);
		ptr=ptr->next;
	}
}
int countnodes(struct node* head)
{
	struct node* run=head;
	int s=0;
	while(run!=NULL)
	{
		s++;
		run=run->next;
	}
	return s;
}
struct node* createnode(struct node **head)
{
int newdata;
struct node *ptr;
printf("Enter the new data: ");
scanf("%d",&newdata);
struct node* newnode=(struct node*)malloc(sizeof(struct node));
if(*head==NULL){
ptr=*head;
*head=newnode;
newnode->data=newdata;
newnode->next=NULL;
}
else
{
newnode->data=newdata;
newnode->next=NULL;
ptr->next=newnode;
ptr=ptr->next;
}

return *head;	
}

struct node* insert_beg(struct node* newnode,struct node*head)
{
	newnode->next=head;
	return newnode;
}
struct node* insert_end(struct node* newnode, struct node* head )
{
	struct node* ptr=head;
	while(ptr->data!=NULL)
	{
		ptr=ptr->next;
	 } 
	 ptr->next=newnode;
	 newnode->next=0;
	 return head;
 }
 struct node* insertpos(struct node* newnode,struct node* head, int k)
 {
 	struct node* ptr=head;
 	if(k==1)
 	{
 		insert_beg(newnode,head);
	 }
	 if(k<1)
	 {
	 	printf("\ninvalid input");
	 }
	 int i=0;
	 while(i<k-2)
	 {
	 	ptr=ptr->next;
	 	i++;
	 }
	 newnode->next=ptr->next;
	 ptr->next=newnode;
	 return head;
 }
 int show_menu(){
    int choice;
    printf("\n");
    printf("1. Create a list\n");
    printf("2. Display the content of the list\n");
    printf("3. Insert a node at the beginning of the list\n");
    printf("4. Insert a node at the end of the list\n");
    printf("5. Insert a node after Kth node into the list\n");
    printf("6. Delete a node at the beginning of the list\n");
    printf("7. Delete a node at the end of the list\n");
    printf("8. Delete kth node of the list\n");
    printf("9. Quit\n");
    printf("-------------------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    return choice;
}
struct node* create()
{
	printf("list created");
	return NULL;
}
struct node* delbeg(struct node* head)
{
	struct node* temp=head;
	head=head->next;
	if(temp!=0)
	free(temp);
	printf("first element deleted ");
	return head;
}
struct node* delend(struct node*head)
{
	struct node*temp=head;
	if(head==0)
	return head;
	if(head->next=0)
	{
	free(head);}
	return NULL;
	if(temp->next->next!=0)
	{
		temp=temp->next;
	}
	struct node*cur=temp->next;
	temp->next=NULL;
	free(cur);
}
struct node* delpos(struct node*head,int v)
{ int count=  countnodes(head); 
	struct node* temp=head;
	if(v<1||v>count)
	{
		printf("\ninvalid input");
		return head;
	}
	if(v==1)
	return delbeg(head);
	int i=1;
	while(temp->next->next!=NULL&&i<v-2)
	{
		temp=temp->next;
		v++;
	}
	 struct node* cur = temp->next;
    temp->next = temp->next->next;
    free(cur);
	
}
  
int main()
{
	struct node* head=NULL;
	struct node *newnode;
	int pos;
	while(1)
	{
		char choice=show_menu();
		switch(choice)
		{
			case 1:
				head=createnode(&head);
				break;
				case 2:
					display(&head);
					break;
					case 3:
					   newnode = createnode(&head);
                head = insert_beg(newnode,head);
					break;
					case 4 :
						newnode=createnode(&head);
						head=insert_end(newnode,  head );
						break;
						case 5:
							 newnode = createnode(&head);
                head = insert_end(newnode,head);
                break;

            case 6:
                int k;
                printf("Enter k: ");
                scanf("%d",&k);
                newnode = createnode(&head);
                head = insertpos(newnode,head,k);
                break;
            case 7:
                head = delbeg(head);
                break;

            case 8:
                head = delend(head);
                break;

            case 9:
                int v;
                printf("Enter k: ");
                scanf("%d",&v);
                head = delpos(head,v);
                break;
            default:
            printf("\nWrong Choice!");
				
		}
		
	}
	return 0;
}