#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("n= ",n);
scanf("%d",&n);
a=0;
		 do
		 {
		 a++;
		  if(a%2!=0)
		  {
		    printf("%d\n",a);
		  }
		  }
		  while(a<n);
getch();
}