#include<stdio.h>
#include<conio.h>
void main()
{
float l,w,area;
clrscr();
printf("length= ",l);
scanf("%f",&l);
printf("width= ",w);
scanf("%f",&w);
area=l*w;
printf("area of rectangle is %.2f",area);
getch();
}