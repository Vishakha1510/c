#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,z,ans;
clrscr();
printf("x= ",x);
scanf("%f",&x);
printf("y= ",y);
scanf("%f",&y);
printf("z= ",z);
scanf("%f",&z);
ans=(x+y+z)*(x+y+z);
printf("ans is %.2f",ans);
getch();
}