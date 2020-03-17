/*Program to find the factorial of given number*/
#include<stdio.h>
void main()
{
	int n,i;
	int fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Factorial is not defined for negative numbers!")
	}
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d \n",n,fact);
}

