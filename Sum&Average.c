/*Program to find sum and average of 2 numbers*/
#include<stdio.h>
int sum(int,int);
float average(int,int);
void main()
{
	int n1,n2,s;
	float a;
	printf("enter the numbers:");
	scanf("%d%d",&n1,&n2);
	s=sum(n1,n2);
	a=average(n1,n2);
	printf("sum=%d\naverage=%f\n",s,a);
}
int sum(int n1,int n2)
{
	int sum;
	sum=n1+n2;
	return sum;
}
float average(int n1,int n2)
{
	float avg;
	avg=(n1+n2)/2.0;
	return avg;
}
