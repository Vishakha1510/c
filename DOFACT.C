#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,fact=1;
clrscr();
printf("n= ",n);
scanf("%d",&n);

		 do
		 {
		 a++;
		  fact*=a;
		  }
		  while(a<n);
		    printf("factorial is %d\n",fact);

getch();
}