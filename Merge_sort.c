/*Program to perform merge sort*/
#include<stdio.h>
void merge(int a[10],int low,int mid,int high)
{
	int i,j,k,m[15];
	i=k=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			m[k]=a[i];
			k++;
			i++;
		}
		else
		{
			m[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		m[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		m[k]=a[j];
		k++;
		j++;
	}
	for(k=low;k<=high;k++)
	a[k]=m[k];
}
void split(int a[15],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		split(a,low,mid);
		split(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void main()
{
	int a[15],n,i;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	split(a,0,n-1);
	printf("\nThe sorted array:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
	
