#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("n= ",n);
scanf("%d",&n);
a=n;
		 do
		 {
		 a--;
		  if(a%2==0)
		  {
		    printf("%d\n",a);
		  }
		  }
		  while(a>1);
getch();
}