#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n;
clrscr();
printf("n= ",n);
scanf("%d",&n);

		 do
		 {
		    a++;
		    printf("%d * %d = %d\n",n,a,(n*a));

		  }
		  while(a<10);

getch();
}