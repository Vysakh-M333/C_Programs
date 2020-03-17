/*Program to perform various stack operations*/
#include<stdio.h>
void push();
void pop();
void display();
int a[10],top=-1,n,max=10;
void main()
{
int ch;
while(1)
{
	printf("Enter the choice:\n1:push\n2:pop\n3:display\n4:exist\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:push();
		       break;
		case 2:pop();
		       break;      
        case 3:display();
		       break;
		case 4:printf("you exited the program!");
		       exit(0);
		default:printf("please enter a correct choice!");
	}
}
}
void push()
{
	if(top==max)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		printf("enter the element\n");
		scanf("%d",&a[top]);
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		item=a[top];
		printf("%d is dropped!",item);
		top--;
	}
}
void display()
{
	int i;
	printf("the stack is:");
	for(i=top;i>-1;i--)
	{
		printf("%d\n",a[i]);
	}
}

