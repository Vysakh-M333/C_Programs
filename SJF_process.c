/*Program for implement shortest job first process sheduling algorithm*/
#include<stdio.h>
struct p
{
int pno;
int b,w,t;
}p1[10],temp;
void main()
{
int n,i,j;
float awt=1.0,atat=1.0;
printf("enter the number of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter the name of %d th process",i+1);
 scanf("%d",&p1[i].pno);
 printf("enter the burst time of %d th process",i+1);
 scanf("%d",&p1[i].b);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(p1[i].b>p1[j].b)
    {
     temp=p1[i];
     p1[i]=p1[j];
     p1[j]=temp;
    }
}
}
p1[0].w=0;
p1[0].t=p1[0].w+p1[0].b;
for(i=0;i<n;i++)
{
	j=i+1;
	p1[j].w=p1[i].b+p1[i].w;
	p1[j].t=p1[j].w+p1[j].b;
}
float twt=0,ttat=0;
for(i=0;i<n;i++)
{
	twt=twt+p1[i].w;
	ttat=ttat+p1[i].t;
}
awt=twt/n;
atat=ttat/n;
printf("pname\tBT\tWT\tTAT\n");
for(i=0;i<n;i++)
{
	printf("P%d\t%d\t%d\t%d\n",p1[i].pno,p1[i].b,p1[i].w,p1[i].t);
}
printf("Average waiting time=%f\n",awt);
printf("Average turn around time=%f",atat);
}
