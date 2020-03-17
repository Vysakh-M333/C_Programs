/*Program to perform various linked list operations*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void create()
{
	struct node *new_node,*temp;
	int ch;
	do
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->next=NULL;
		printf("Enter data:");
		scanf("%d",&new_node->data);
		if(head==NULL)
		{
			head=new_node;
		}
		else
		{
			temp->next=new_node;
		}
		temp=new_node;
		printf("Do you want to enter another element?\n1 for yes and 0 for no");
		scanf("%d",&ch);
	}while(ch);
}
void display()
{	struct node *temp;
	temp=head;
	printf("\n");
	while(temp!=NULL)
	{	printf("-->%d",temp->data);
		temp=temp->next;
	}
}
int insert()
{	int ch=0;	
	do
	{	struct node *new_node;
		int p;
		printf("\nSelect position you want to insert new data: ");
		printf("\n1. Beginning\n2. Specific\n3. End\n4. Exit\n");
		printf("Enter your choice: ");		
		scanf("%d",&ch);
		new_node = (struct node*)malloc(sizeof(struct node));	
		switch(ch)
		{	case 1: printf("\nEnter data: ");
					scanf("%d",&new_node->data);
					new_node->next=NULL;
					if(head==NULL)
					head=new_node;
					else
					{	new_node->next=head;
						head=new_node;	
					}
					break;
			case 2: printf("\nEnter data: ");
					scanf("%d",&new_node->data);
					new_node->next=NULL;
					if(head==NULL)
					{
						printf("\nprevious list canot be empty!");
					}
					else
					{
						printf("\nInsert after : ");
						scanf("%d",&p);
						struct node *temp;
						temp=head;
						while(temp!=NULL)
						{	
							if(temp->data==p)
								break;	
							temp=temp->next;	
						}
						new_node->next=temp->next;
						temp->next=new_node;
					} 
					break;
			case 3: printf("\nEnter data: ");
					scanf("%d",&new_node->data);
					new_node->next=NULL;
					if(head==NULL)
					head=new_node;
					else
					{	struct node *temp;
						temp=head;
						while(temp->next!=NULL)
						{
						temp=temp->next;
						}
						temp->next=new_node;	
					}
					break;
			case 4: return 0;
			default:printf("invaild choice"); 
				break;
			}
		display();
		}while(ch!=4);
}
void delete()
{
	struct node *temp=head,*del;	
	int p;
	if(head==NULL)
	 {
	  printf("\nlist is empty\n");
	 }
	else
	{
		printf("\nenter the data to be delete: ");
		scanf("%d",&p);
		while(temp!=NULL)
			{
				if(temp==head&&temp->data==p)
				{
					del=temp->next;		
					head=del;
					free(temp);
					break;
				}
				del=temp->next;
				if(del->data==p)
				{
					temp->next=del->next;
					free(del);
					break;
				}
				temp=temp->next;
			}
		display();
	}
}
void main()
{
	create();
	int ch=0;
		do
		{	printf("Do you want to: ");
			printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
			printf("Enter your choice: ");
			scanf("%d",&ch);
			switch(ch)
			{	case 1: insert();
					break;
				case 2: delete();
					break;
				case 3: display();
					break;
				case 4: exit(0);
				default: printf("ERROR: Enter Valid Option! ");
			}
		}while((ch<4)&&(ch>0));
}

