#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,min;
clrscr();
printf("a=",a);
scanf("%d",&a);
printf("b= ",b);
scanf("%d",&b);
printf("c= ",c);
scanf("%d",&c);
			if(a<b)
			{
				   if(a<c)
				   {
					min=a;
				   }
				   else
				   {
				       min=c;
				   }

			}
			else
			{          if(b<c)
				   {
				    min=b;
				    }
				    else
				    {
				    min=c;
				    }

			}

		     printf("minimum value is %d",min);
getch();
}