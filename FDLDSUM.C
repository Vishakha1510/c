#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,first_digit,last_digit;
clrscr();
printf("enter any number:",n);
scanf("%d",&n);
last_digit=n%10;
while(n>=10)
{
n=n/10;
}
first_digit=n;
sum=first_digit+last_digit;
printf("sum of first and last digit of number is %d\n",sum);

getch();
}