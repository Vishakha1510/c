#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int a,b;
clrscr();
printf("enter operator: ");
scanf("%c",&c);
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
		   switch(c)
		   {
		   case'+':
			   printf("addition is %d",a+b);
			   break;
		   case'-':
			   printf("subtraction is %d",a-b);
			   break;
		   case'*':
			   printf("multiplication is %d",a*b);
			   break;
		   case'/':
			   printf("division is %d",a/b);
			   break;
		   default:
			   printf("invalid input");
			   break;
		   }
getch();
}
