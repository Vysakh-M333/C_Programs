/*Program to perform linear sort*/
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
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	printf("the sorted array in ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

