/*Program for implement multi level file management method*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct d
{	int fcnt;
	char dirname[15],fname[10][15];
}dir[10];
int N=0;

void createdir()
{	printf("Enter directory name: ");
	scanf("%s",dir[N].dirname);
	N++;
	printf("Directory created");
}

void displaydir()
{	int i=0;
	printf("Contents:\n");
	printf("No.\tDirName\n");	
	for(i=0;i<N;i++)
		printf("%d\t%s\n",i+1,dir[i].dirname);
}

void create(int dno)
{	char filename[15]; int i=0;	
	printf("Enter filename: ");
	scanf("%s",filename);
	if(dir[dno].fcnt==0)
	{	strcpy(dir[dno].fname[dir[dno].fcnt],filename);
		dir[dno].fcnt++;
		printf("File created");
	}
	else
	{	for(i=0;i<dir[dno].fcnt;i++)
			if(!strcmp(filename,dir[dno].fname[i]))
			{	printf("Error: File name already exists");
				break;
			}		
		if(i==dir[dno].fcnt)
		{	strcpy(dir[dno].fname[dir[dno].fcnt],filename);
			dir[dno].fcnt++;
			printf("File created");
		}
	}
}

void delete(int dno)
{	char filename[15]; int i=0,flag=0;	
	printf("Enter filename: ");
	scanf("%s",filename);
	for(i=0;i<dir[dno].fcnt;i++)
		if(!strcmp(filename,dir[dno].fname[i]))
		{	strcpy(dir[dno].fname[i],dir[dno].fname[dir[dno].fcnt-1]);
			dir[dno].fcnt--;
			flag=1;
			printf("File deleted");
			break;
		}
	if(!flag)
		printf("Error: File not found");
}

void display(int dno)
{	int i=0;
	if(dir[dno].fcnt==0)
		printf("Empty directory");
	else
	{	printf("Contents of %s\n",dir[dno].dirname);
		printf("No.\tFilename\n");	
		for(i=0;i<dir[dno].fcnt;i++)
			printf("%d\t%s\n",i+1,dir[dno].fname[i]);
	}	
}

void search(int dno)
{	int i=0;
	if(dir[dno].fcnt==0)
		printf("Empty directory");
	else
	{	
		char filename[15]; int i=0;	
		printf("Enter filename: ");
		scanf("%s",filename);
		for(i=0;i<dir[dno].fcnt;i++)
			if(!strcmp(filename,dir[dno].fname[i]))
			{	printf("File found");
				break;
			}
		if(i==dir[dno].fcnt)
			printf("Error: File not found");
	}
}

void main()
{	int dno=-1,i=0;
	char dname[15];
	int ch=0;
	do
	{	printf("\nDo you want to: ");
		printf("\n1. Create directory\n2. Display directories\n3. Create file\n4. Delete file\n5. Display files\n6. Search files\n7. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	case 1:	createdir();
				break;
			case 2: displaydir();
				break;	
			case 3: 
			case 4: 
			case 5: 
			case 6:	printf("Enter name of directory: ");
				scanf("%s",dname);
				for(i=0;i<N;i++)
					if(!strcmp(dname,dir[i].dirname))
					{	dno=i;
						break;
					}	
				if(i==N)
				{	printf("Invalid Directory");
					break;
				}
				switch(ch)
				{	case 3: create(dno);
						break;
					case 4: delete(dno);
						break;
					case 5: display(dno);
						break;
					case 6:	search(dno);
						break;			
				}
				break;			
			case 7: exit(0);
			default: printf("ERROR: Enter Valid Option! ");
		}
	}while(ch!=7);
}
