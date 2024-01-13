#include<stdio.h>
#include<conio.h>
void main()
{
int a=2000,n=3000;
clrscr();

		   do
		   {
		   a++;
		   if(a%4==0)
		   {
		   printf("%d\t",a);
		   }
		   }
		   while(a<n);
getch();
}