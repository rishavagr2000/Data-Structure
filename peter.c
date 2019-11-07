#include<stdio.h>
#include<conio.h>
#include<process.h>
#define stack_size 25
void push(int [],int);
void pop(int []);
void display(int []);
int top=-1;
int main()

{int c;
 char s;

 int cupboard[stack_size];
 clrscr();
 printf("--------------------------------\n");
 printf("Peter's Wardrobe (capacity : 20)\n");
 printf("--------------------------------\n");
 printf("what do you want to do?\n");
 printf("1.put a shirt inside the cupboard:\n");
 printf("2.remove a shirt from the cupboard:\n");
 printf("3.display all the shirts in the cupboard:\n");
 printf("4.exit\n");
 printf("-----------------------------------------\n");
 printf("enter your choice:");
 scanf("%d",&c);

 switch(c)
 {case 1:printf("which number shirt do you want to put inside?\n");
	 scanf("%d",s);
	 push(cupboard,s);
	 break;
  case 2:pop(cupboard);
	 break;
  case 3:display(cupboard);
	 break;
  case 4:exit(0);
  default:printf("invalid choice\n");
  }
  getch();

 return 0;}

void push(int cupboard[],int shirt)
{
 if(top==stack_size)
  printf("The cupboard is full\n");

 else
  {top++;
   cupboard[++top]=shirt;} }

void pop(int cupboard[])
{if(top==-1)
 printf("cupboard empty\n");
 else
 {printf("%s shirt is removed from cupboard\n",cupboard[top]);
  top--;}}

void display(int cupboard[])
{int i;
 if(top==-1)
 printf("stack is empty\n");

 for(i=0;i<=top;i++)
 printf("no. %d shirt",cupboard[i]);

 for(i=top;i>=0;i--)
 printf("no. %d shirt",cupboard[i]); }

