#include<stdio.h>
#include<conio.h>
#define s_size 10

void ins(int stack[],int data,int *top)
{
	stack[*top]=data;
	(*top)++;

}
void arrange(int stack[],int n,int *top)

{        
          int i,j,small,pos;
	  
      small=stack[0];
	
      for(i=0;i<n;i++)
	{
		if(stack[i]<small)
		{
			small=stack[i];
			pos=i;
		 }
	}
	for(i=0;i<n;i++)
	{
		if(stack[i]==small)
		{
			pos=i;
			stack[*top]=small;
			break;
		}
	}
	j=pos+1;
	for(i=pos;i<n;i++)
	{
		stack[i]=stack[j];
		j++;
	}
	stack[*top]=small;}

void disp(int stack[],int *top )
{int i;
 for(i=0;i<*top;i++)
 {printf("%d  ",stack[i]);}}

void main()
{int stack[s_size];
 int n,items,i,top=0;
 clrscr();
 printf("Enter no. of elements:\n");
 scanf("%d",&n);
 printf("Enter stack elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&item);
  ins(stack,item,&top);}
  
  for(i=0;i<n;i++)
	{
		arrange(stack,n,&top);
	}

disp(stack,&top);
getch();
}
