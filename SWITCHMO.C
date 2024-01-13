#include<stdio.h>
#include<conio.h>
void main()
{
char m;
clrscr();
printf("month: ",m);
scanf("%c",&m);
		      switch(m)
		      {
			   case'j':
			       printf("january has 31 days");
			       break;
			   case'f':
			       printf("february has 28 or 29 days");
			       break;
			   case'm':
			       printf("march has 31 days");
			       break;
			   case'a':
			       printf("april has 30 days");
			       break;
			   case'M':
			       printf("may has 31 days");
			       break;
			   case'J':
			       printf("june has 30 days");
			       break;
			   case'u':
			       printf("july has 31 days");
			       break;
			   case'A':
			       printf("august has 31 days");
			       break;
			   case's':
			       printf("september has 30 days");
			       break;
			   case'o':
			       printf("october has 31 days");
			       break;
			   case'n':
			       printf("november has 30 days");
			       break;
			   case'd':
			       printf("december has 31 days");
			       break;
			   default:
			   printf("invalid input");
			   break;
		      }
 getch();
 }