/*Program to perform Heap sort*/
#include<stdio.h>
void heap(int a[15],int n)
{
	int i,temp,c,root;
	root=n/2;
	for(i=root;i>=1;i--)
	{
		c=2*i;
		if((a[c]<a[c+1])&&c<n)
		{
			c++;
		}
		if(a[i]<a[c])
		{
			temp=a[i];
			a[i]=a[c];
			a[c]=temp;
		}
	}
}
void heapsort(int a[15],int n)
{
	int m,temp;
	m=n;
	do
	{
		temp=a[1];
		a[1]=a[m];
		a[m]=temp;
		m--;
		heap(a,m);
	}while(m!=0);
}
void main()
{
	int a[15],n,i;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	heap(a,n);
	heapsort(a,n);
	printf("\nThe sorted array:");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",a[i]);
	}
}
