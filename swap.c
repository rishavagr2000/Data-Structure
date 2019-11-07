#include <stdio.h>
#include<conio.h>
 void swap(int*, int*);
 int main()
{
   int x, y;
   clrscr();
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   getch();  
   return 0;
}
 
void swap(int *p, int *q)
{
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;   
}