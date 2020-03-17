/*Program to perform binary search*/
#include<stdio.h>
void main()
{
	int a[10],n,i,key,flag,end,start,mid;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be search");
	scanf("%d",&key);
	start=0;
	end=n-1;
	flag=0;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		{
		flag=1;
		printf("element found at %dth position",mid+1);
		break;
		}
		else if(a[mid]==key)
		{
			start=mid+1 ;
		}
		else
		{
			end=mid-1 ;
		}
		
	}
	if(flag==0)
		{
			printf("element not found");
		}
}
