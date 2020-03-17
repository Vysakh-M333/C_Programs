/*Program to find the smallest among given numbers*/
#include<stdio.h>
void main()
{
	int *p,l,n,i,x[10];
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	p=&x[0],l=x[0],i=0;
	while(i<5)
	{
		if(*p<l)
		{
		l=*p;
		}
		i++;
		p++;
	}
	printf("Smallest is %d",l);
}
