#include<stdio.h>
#include<conio.h>
void main()
{
int a,n=0;
clrscr();
printf("enter any number: ");
scanf("%d",&a);
while(a!=0)
{
a/=10;
n++;
}
printf("the number of digits are %d\n",n);
getch();
}