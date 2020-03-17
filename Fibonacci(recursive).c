/*Program to find the first n terms of the fibonacci series*/
#include<stdio.h>
int fib(int);
void main()
{
	int n,i;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}	
}
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	return	fib(n-1)+fib(n-2);
}
