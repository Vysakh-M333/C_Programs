/*Program to perform selection sort*/
#include<stdio.h>
void main()
{
	int a[10],n,i,j,min,temp,k;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray before sort:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=n-1;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(min!=i)
			{
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
			printf("\n%dth pass:",i+1);
			for(k=0;k<n;k++)
			{
		 printf("%d\t",a[k]);
			}
	}
	printf("\nThe sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}

