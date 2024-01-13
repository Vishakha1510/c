#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,sum=0;
clrscr();
printf("n= ",n);
scanf("%d",&n);
		 for(a=1;a<=n;a++)
		 {
		  sum=sum+a;
		  printf("%d\n",a);
		 }
		 printf("\nsum is %d",sum);
getch();
}