#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,add,sub,mul,div,mod;
clrscr();
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("addition of a and b is %d\n",add);
printf("subtraction of a and b is %d\n",sub);
printf("multiplication of a and b is %d\n",mul);
printf("division of a and b is %d\n",div);
printf("modulus of a and b is %d\n",mod);
getch();
}