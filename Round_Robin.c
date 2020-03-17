/*Program for implement round_robin process sheduling*/
#include<stdio.h>
struct p
{
int pno;
int bt,wt,tat,st;
}p1[20];
void main()
{
	int n,i,tq,temp,count,sq;
	float twt,ttat,awt=1.0,atat=1.0;
	printf("enter the number of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 printf("enter the name of %d th process",i+1);
	 scanf("%d",&p1[i].pno);
	 printf("enter the burst time of %d th process",i+1);
	 scanf("%d",&p1[i].bt);
	 p1[i].st=p1[i].bt;
	}
	printf("enter the time slice:");
	scanf("%d",&tq);
	while(1) 
	{ 
	 for(i=0,count=0;i<n;i++) 
	 { 
	  temp=tq; 
	  if(p1[i].st==0) 
	  { 
	   count++; 
	   continue; 
	  } 
	  if(p1[i].st>tq)
	  { 
	   p1[i].st=p1[i].st-tq;
	  } 
	  else
	  {
		if(p1[i].st>=0) 
		{ 
		 temp=p1[i].st; 
		 p1[i].st=0; 
		}
	  } 
	  sq=sq+temp; 
	  p1[i].tat=sq; 
	 } 
	if(n==count) 
	break; 
	}
	for(i=0;i<n;i++) 
	{ 
		p1[i].wt=p1[i].tat-p1[i].bt; 
		twt=twt+p1[i].wt; 
		ttat=ttat+p1[i].tat; 
	}  
	awt=twt/n;
	atat=ttat/n;
	printf("pname\tBT\tWT\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t%d\t%d\t%d\n",p1[i].pno,p1[i].bt,p1[i].wt,p1[i].tat);
	}
	printf("Average waiting time=%f\n",awt);
	printf("Average turn around time=%f",atat);
}
