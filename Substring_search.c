/*Program to find a substring is present in a given string*/
#include<stdio.h>
#include<string.h>

void main()
{
	char str[80],sub[10];
	int n1,n2,i,j,flag;

	printf("Enter a string:");
	scanf("%s",str);

	puts("Enter search substring:");
	scanf("%s",sub);

	n1=strlen(str);
	n2=strlen(sub);

	for(i=0;i<=n1-n2;i++)
	{
		for(j=i;j<i+n2;j++)
		{
			flag=1;
			if (str[j]!=sub[j-i])
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		break;
	}
	if (flag==1)
	printf("SEARCH SUCCESSFUL!");
	else
	printf("SEARCH UNSUCCESSFUL!");
}
