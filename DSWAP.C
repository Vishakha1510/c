#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter first number",a);
scanf("%d",&a);
printf("enter second number",b);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
//swap
printf("after swapping a is %d\n",a);
printf("after swapping b is %d",b);
getch();
}