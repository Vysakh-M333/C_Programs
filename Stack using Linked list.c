/*Program to implement stack using linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*top,*top1,*temp,*t;
void push(int item)
{
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->link=top;
	top=temp;
}
void pop()
{
	int key;
	if(top==NULL)
	{
		printf("stack underflow\n");
	}
	else
	{
		key=top->data;
		printf("%d is dropped!\n",key);
		top=top->link;
	}
}
void display()
{
	top1=top;
	if(top1==NULL)
	{
	printf("the stack is empty!\n");
    }
    else
    {
	printf("the stack is:\n");
	while(top1!=NULL)
	{
		printf("%d\n",top1->data);
		top1=top1->link;
	}
}
}
void main()
{
int ch,item;
do{
printf("Enter the choice:\n1:push\n2:pop\n3:display\n4:exist\n");
scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter item to be inserted:");
		       scanf("%d",&item);
		       push(item);
		       break;
		case 2:pop();
		       break;      
        case 3:display();
		       break;
		case 4:printf("you exited the program!\n");
			   exit(0);
		       break;
		default:printf("please enter a correct choice!\n");
	}
}while(ch!=4);
}
