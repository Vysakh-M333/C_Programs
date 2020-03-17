/*Program for implement sequential file alocation*/
#include<stdio.h>
struct file
{
 int fileno;
 int start,no,finish;
}f[10];
void main()
{
 int m[30],i,sb,nb,flag,ch,fb,j=0,na,count=0;
 for(i=0;i<30;i++)
 {
  m[i]=0;
 }
 while(1)
 {
  flag=0,fb=0;
  printf("enter the name:");
  scanf("%d",&na);
  printf("enter the starting block:");
  scanf("%d",&sb);
  printf("enter the no.of blocks:");
  scanf("%d",&nb);
  fb=sb+nb-1;
  for(i=sb;i<=fb;i++)
  {
   if(m[i]==1)
   {
    flag=1;
    break;
   }
   else if(m[i]==0)
   {
    m[i]=1;
   }
  }
  if(flag==0)
  {
   printf("file is allocated!");
   f[j].fileno=na;
    f[j].start=sb;
    f[j].no=nb;
    f[j].finish=fb;
    j++;
    count++;
  }
  else
  {
   printf("file is not allocated! Already this location is allocated!");
  }
  printf("Do you want to continue?(0/1)");
  scanf("%d",&ch);
  if(ch==0)
   break;
 }
printf("name\tstart\tnumber\tfinish\n");
for(i=0;i<count;i++)
{
	printf("file%d\t%d\t%d\t%d\n",f[i].fileno,f[i].start,f[i].no,f[i].finish);
}
}
