#include<stdio.h>
#include<stdlib.h>
void main()
{ 
  int req[20],mov[20],i,dp,ds,n;
  float st=0,ast=0;
  printf("Enter the size of disk:");
  scanf("%d",&ds);
  printf("Enter the intial Head position:");
  scanf("%d",&dp);
  printf("Enter the no.of requests:");
  scanf("%d",&n);
  printf("Enter the requests:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&req[i]);
  }
  mov[0]=abs(dp-req[0]);
  printf("Disk head moves %d to %d with seek time:%d\n",dp,req[0],mov[0]);
  for(i=1;i<n;i++)
  {
    mov[i]=abs(req[i-1]-req[i]);
    printf("Disk head moves %d to %d with seek time:%d\n",req[i-1],req[i],mov[i]);  
  }
  for(i=0;i<n;i++)
  {
     st=st+mov[i];
  }
  ast=st/n;
  printf("seek time=%f\n",st);
  printf("average seek time=%f\n",ast);
}

