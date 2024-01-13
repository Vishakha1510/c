#include<stdio.h>
#include<conio.h>
void main()
{
float r,area;
const float pie=3.14;
clrscr();
printf("radius= ",r);
scanf("%f",&r);
area=pie*r*r;
printf("area of circle is %.1f",area);
getch();
}