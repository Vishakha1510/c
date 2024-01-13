#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,max;
clrscr();
printf("a= ",a);
scanf("%d",&a);
printf("b= ",b);
scanf("%d",&b);
printf("c= ",c);
scanf("%d",&c);
printf("d= ",d);
scanf("%d",&d);
		      if(a>b)
		      {
			     if(a>c)
			     {
					if(a>d)
					{
					    max=a;
					}
					else
					{
					    max=d;
					}
			      }
			      else
			      {
				   if(c>d)
				   {
				      max=c;
				   }
				   else
				   {
				      max=d;
				    }
			       }
			       }
		      else
		      {
			      if(b>c)
			      {
					if(b>d)
					{
					    max=b;
					}
					else
					{
					    max=d;
					}
			       }
			       else
			       {
					if(c>d)
					{
					     max=c;
					}
					else
					{
					      max=d;
					}
				}
			 }
printf("maximum value is %d",max);
getch();
}