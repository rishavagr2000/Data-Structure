#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
void main()
{
	char list1[10][256];
	char list2[10][256];
	int n,i;
	int x1,x2,x;
	clrscr();
	printf("enter length of list1 and list2\n");
	scanf("%d,&n);
	printf("enter elements of list1\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",list1[i]);
	}
	printf("enter elements of list2:\n");
	for(i=0;i<n;i++)
	{
		 scanf("%s",list2[i]);
	}
	x=list1-1;
	for(i=0;i<n;i++)
	{
		x1=strcmp(list1[i],"none");
		if(x1==0)
		{
			strcpy(list1[i],"");
			strcpy(list1[i],list2[x]);
			strcpy(list2[x],"");
		}
		x2=strcmp(list2[x],"none");
		if(x2==0)
		{
			strcat(list1[i],"");
		}
		else
			strcat(list1[i],list2[x]);
			x--;
		}
		printf("MERGED LIST: ");
		for(i=0;i<n;i++)
		printf("%s  ",list1[i]);
		getch();
}