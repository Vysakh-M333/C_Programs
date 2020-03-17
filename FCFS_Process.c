/*Program for implement first come first served process sheduling*/
#include<stdio.h>
struct p
{
int pno;
int ar,b,f,s,w,t;
}p1[10],temp;
void main()
{
	int n,i,j,awt=1,atat=1;
	printf("enter the number of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 printf("enter the name of %d th process",i+1);
	 scanf("%d",&p1[i].pno);
	 printf("enter the arrival time of %d th process",i+1);
	 scanf("%d",&p1[i].ar);
	 printf("enter the burst time of %d th process",i+1);
	 scanf("%d",&p1[i].b);
	}
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	  if(p1[i].ar>p1[j].ar)
		{
		 temp=p1[i];
		 p1[i]=p1[j];
		 p1[j]=temp;
		}
	}
	}
	p1[0].s=p1[0].ar;
	p1[0].w=p1[0].s-p1[0].ar;
	p1[0].f=p1[0].s+p1[0].b;
	p1[0].t=p1[0].w+p1[0].b;
	for(i=0;i<n;i++)
	{
		j=i+1;
		p1[j].s=p1[i].f;
		p1[j].w=p1[j].s-p1[j].ar;
		p1[j].f=p1[j].s+p1[j].b;
		p1[j].t=p1[j].w+p1[j].b;
	}
	int twt=0,ttat=0;
	for(i=0;i<n;i++)
	{
		twt=twt+p1[i].w;
		ttat=ttat+p1[i].t;
	}
	awt=twt/n;
	atat=ttat/n;
	printf("pname\tAT\tBT\tStart\tWT\tFinish\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p1[i].pno,p1[i].ar,p1[i].b,p1[i].s,p1[i].w,p1[i].f,p1[i].t);
	}
	printf("Average waitting time=%d\n",awt);
	printf("Average turn around time=%d",atat);
}
