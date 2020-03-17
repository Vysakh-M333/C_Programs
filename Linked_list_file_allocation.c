/*Program for implement linked list file allocation*/
#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct file
{	char name[20];	
	int ind,nb;
	struct node *blocks;
}f[20];

struct node
{	int data;
	struct node *next;
};

struct node * insert(struct node *curr,int n)
{	struct node *new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=n;
	new_node->next=NULL;
	curr->next=new_node;
	curr=new_node;
	return curr;
}

void display(struct node *head)
{	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{	printf("-->%d",temp->data);
		temp=temp->next;
	}
}

void main()
{	int m[30];
	int i,ch,c=0;
	
	for(i=0;i<30;i++)
	{
		m[i]=0;
	}

	do
	{	int j,k=0,b[20];
		char name[20];
		int sb,nb,flag=0;
		printf("Enter file name: ");
		scanf("%s",name);
		printf("Enter Starting block: ");
		scanf("%d",&sb);
		printf("Enter no. of blocks: ");
		scanf("%d",&nb);
		int n=nb;		
		for(j=sb;j<30;j++)
		{	if(n==0)
			{	flag=1;
				break;
			}
			if(m[j]==0)
			{	m[j]=1;
				b[k]=j;
				k++;	
				n--;	
			}
		}
		if(flag==1)
		{	
			f[c].ind=b[0];
			strcpy(f[c].name,name);
			f[c].nb=nb;
			struct node *curr;			
			f[c].blocks = (struct node*)malloc(sizeof(struct node));	
			f[c].blocks->data=b[0];
			f[c].blocks->next=NULL;
			curr=f[c].blocks;
			for(k=1;k<nb;k++)
			{			
				curr=insert(curr,b[k]);
			}
			c++;
			printf("File Allocated");		
		}
		else
			printf("File cannot be allocated");		
		
		printf("\nDo you want to continue(0/1): ");
		scanf("%d",&ch);
	}while(ch);
	printf("\nFileName\tStart_Index\tNOB\tIndex_Blocks");
	for(i=0;i<c;i++)
	{	
		printf("\n%s\t\t%d\t\t%d\t",f[i].name,f[i].ind,f[i].nb);
		display(f[i].blocks);
	}
}
