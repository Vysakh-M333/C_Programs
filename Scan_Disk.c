/*Program for implement Scan disk sheduling algorithm*/
#include<stdio.h>
#include<stdlib.h>
void main()
{ 
  int req[20],mov[20],i,j,dp,ds,n,hloc,temp;
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
  req[n]=dp;n++;
  req[n]=0;
  n++;
  for(i=0;i<n;i++)
  {
	  for(j=i;j<n;j++)
	  {
		  if(req[i]>req[j])
		  {
			  temp=req[i];
			  req[i]=req[j];
			  req[j]=temp;
		  }
	  }
 }
  for(i=0;i<n;i++)
  {
   if(dp==req[i]) 
   { 
	   hloc=i; break; 
   }
  }
  mov[0]=abs(dp-req[hloc-1]);
  printf("Disk head moves %d to %d with seek time:%d\n",dp,req[hloc-1],mov[0]);
  for(i=hloc-1;i>0;i--)
  {
    mov[i]=abs(req[i-1]-req[i]);
    printf("Disk head moves %d to %d with seek time:%d\n",req[i],req[i-1],mov[i]);  
  }
  mov[hloc]=abs(0-req[hloc+1]);
  printf("Disk head moves 0 to %d with seek time:%d\n",req[hloc+1],mov[hloc]);
  for(i=hloc+2;i<n;i++)
  {
   mov[i]=abs(req[i-1]-req[i]);
   printf("Disk head moves %d to %d with seek time:%d\n",req[i-1],req[i],mov[i]);
  }
  mov[hloc+1]=0;
  for(i=0;i<n;i++)
  {
     st=st+mov[i];
  }
  ast=st/(n-2);
  printf("seek time=%f\n",st);
  printf("average seek time=%f\n",ast);
}

