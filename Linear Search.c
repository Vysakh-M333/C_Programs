/*Program to perform linear search*/
#include<stdio.h>
void main()
{
	int a[10],n,i,key,flag;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		flag=0;
		if(a[i]==key)
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	{
		printf("The number is found at %d position!",i+1);
	}
	else
	{
		printf("the number not found");
	}
}
