#include<stdio.h>
#include<conio.h>
void main()
{
float area,b,h;
clrscr();
printf("breadth is : ",b);
scanf("%f",&b);
printf("height is : ",h);
scanf("%f",&h);
area=(b*h)/2;
printf("area of triangle is %.2f",area);
getch();
}