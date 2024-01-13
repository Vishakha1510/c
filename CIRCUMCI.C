#include<stdio.h>
#include<conio.h>
void main()
{
float r,circumference;
const float pie=3.14;
clrscr();
printf("radius of circle is : ",r);
scanf("%f",&r);
circumference=2*pie*r;
printf("circumference of circle is %.2f",circumference);
getch();
}