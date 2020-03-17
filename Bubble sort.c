/*Program to perform Bubble sort*/
#include<stdio.h>
void main()
{
	int a[10],n,i,t,j;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("the sorted array in ascending order:");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}

