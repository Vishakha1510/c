#include<stdio.h>
#include<conio.h>
int calculate_cube(int n)
{
return n*n*n;
}
void main()
{
int n,cube;
clrscr();
printf("enter any number: ");
scanf("%d",&n);
cube=calculate_cube(n);
printf("cube of given number is %d",cube);
getch();
}