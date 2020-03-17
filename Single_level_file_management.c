/*Program for implement single directory file management method*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct d
{	int fcnt;
	char dirname[15],fname[10][15];
}dir;

void create()
{	char filename[15]; int i=0;	
	printf("Enter filename: ");
	scanf("%s",filename);
	if(dir.fcnt==0)
	{	strcpy(dir.fname[dir.fcnt],filename);
		dir.fcnt++;
		printf("File created");
	}
	else
	{	for(i=0;i<dir.fcnt;i++)
			if(!strcmp(filename,dir.fname[i]))
			{	printf("Error: File name already exists");
				break;
			}
		if(i==dir.fcnt)
		{	strcpy(dir.fname[dir.fcnt],filename);
			dir.fcnt++;
			printf("File created");
		}
	}
}

void delete()
{	char filename[15]; int i=0,flag=1;	
	printf("Enter filename: ");
	scanf("%s",filename);
	for(i=0;i<dir.fcnt;i++)
		if(!strcmp(filename,dir.fname[i]))
		{	strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
			dir.fcnt--;
			flag=0;
			printf("File deleted");
			break;
		}
	if(flag==1)
		printf("Error: File not found");
}

void display()
{	int i=0;
	if(dir.fcnt==0)
		printf("Empty directory");
	else
	{	printf("Contents of %s\n",dir.dirname);
		printf("No.\tFilename\n");	
		for(i=0;i<dir.fcnt;i++)
			printf("%d\t%s\n",i+1,dir.fname[i]);
	}	
}

void search()
{	
	if(dir.fcnt==0)
		printf("Empty directory");
	else
	{	
		char filename[15]; int i=0;	
		printf("Enter filename: ");
		scanf("%s",filename);
		for(i=0;i<dir.fcnt;i++)
			if(!strcmp(filename,dir.fname[i]))
			{	printf("File found");
				break;
			}
		if(i==dir.fcnt)
			printf("Error: File not found");
	}
}

void main()
{	printf("Enter directory name: ");
	scanf("%s",dir.dirname);
	dir.fcnt=0;
	int ch=0;
	do
	{	printf("\nDo you want to: ");
		printf("\n1. Create\n2. Delete\n3. Display\n4. Search\n5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	case 1: create();
				break;
			case 2: delete();
				break;
			case 3: display();
				break;
			case 4:	search();
				break;			
			case 5: exit(0);
			default: printf("ERROR: Enter Valid Option! ");
		}
	}while(ch!=5);
}
