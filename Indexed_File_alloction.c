/*Program to implement Indexed_File_alloction*/
#include<stdio.h>
#include<string.h>
struct filetable
{
char name[20];
int nob,blocks[30];
}ft[30];
void main()
{
int i,j,n,b[10];
for(i=0;i<10;i++)
b[i]=0;

char s[20];
printf("Enter no:of files:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the file name %d:",i+1);
scanf("%s",ft[i].name);
printf("Number of blocks:");
scanf("%d",&ft[i].nob);
printf("Enter the indexes%d:",i+1); 
for(j=0;j<ft[i].nob;j++)
{
scanf("%d",&ft[i].blocks[j]);
}
}
printf("Enter the filename to be searched:");
scanf("%s",s);
for(i=0;i<n;i++)
{
if(strcmp(s,ft[i].name)==0)
break;
}   if(i==n)
{
printf("\nFile not found");
}
else
{
printf("\nFname\tsize\t\tBlock indexes\n");
printf("\n%s\t%d\t\t",ft[i].name,ft[i].nob);
for(j=0;j<ft[i].nob-1;j++)
{
printf("%d ",ft[i].blocks[j]);
0;
}
printf("%d ",ft[i].blocks[j]);
printf("\n");
}
}

