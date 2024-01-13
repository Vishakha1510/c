#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("first number is %d\n",a);
printf("second number is %d",b);
getch();
}