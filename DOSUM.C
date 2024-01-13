#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,sum=0;
clrscr();
printf("n= ",n);
scanf("%d",&n);

		 do
		 {
		 a++;
		  sum=sum+a;
		  printf("%d\n",a);
		 }
		 while(a<n);
		 printf("\nsum is %d",sum);
getch();
}