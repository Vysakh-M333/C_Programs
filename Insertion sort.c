/*Program to perform insertion sort*/
#include<stdio.h>
void main()
{
	int a[10],n,i,j,key,k;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray before sort");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<key)
			{
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
		a[j+1]=key;
			printf("\n%dth pass:",i);
			for(k=0;k<n;k++)
			 {
		  printf("%d\t",a[k]);
			 }
	}

}

