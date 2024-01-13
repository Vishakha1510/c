#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,min;
clrscr();
printf("a= ",a);
scanf("%d",&a);
printf("b= ",b);
scanf("%d",&b);
printf("c= ",c);
scanf("%d",&c);
printf("d= ",d);
scanf("%d",&d);
		   if(a<b)
		   {
		       if(a<c)
		       {
			    if(a<d)
			    {
				min=a;
			    }
			    else
			    {
				min=d;
			    }
		       }
		       else
		       {
			     if(c<d)
			     {
			       min=c;
			     }
			     else
			     {
				min=d;
			     }
			  }
		       }
		   else
		   {
			     if(b<c)
			     {
				   if(b<d)
				   {
				       min=b;
				   }
				   else
				   {
				       min=d;
				   }
			      }
			      else
			      {
				     if(c<d)
				     {
					 min=c;
				     }
				     else
				     {
					  min=d;
				     }

			       }
			 }
printf("minimum value is %d",min);
getch();
}

