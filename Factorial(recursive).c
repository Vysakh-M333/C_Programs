/*Program to find the factorial of given number*/
#include<stdio.h>
int fact(int a);
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Factorial is not defined for negative numbers!")
	}
	printf("The factorial of %d is %d \n",n,fact(n));
}
int fact(int n)
{
	if(n==0||n==1)
	 return 1;
	else
	 return n*fact(n-1);
} 

