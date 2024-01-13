#include<stdio.h>
int div(int num)
{
return 0;
}
void main()
{
int num;
clrscr();
printf("enter any number: ");
scanf("%d",&num);
	  if(num%3==0 && num%5==0)
	       {
	       printf("number is divisible by both 3 and 5");
	       }
	       else
	       {
	       printf("number is not divisible by 3 and 5");
	       }
getch();
}