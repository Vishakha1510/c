#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,min;
clrscr();
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
printf("d= ");
scanf("%d",&d);
printf("e= ");
scanf("%d",&e);
		   if(a<b)
		   {
		       if(a<c)
		       {
			    if(a<d)
			    {
				  if(a<e)
				  {
				     min=a;
				   }
				   else
				   {
				      min=e;
				    }

			    }
			    else
			    {
			     if(d<b)
			     {
			     if(d<c)
			     {
			     if(d<e)
			     {
			       min=d;
			      }
			     else
			    {
			      min=e;
			     }
			     }
			     }
			     }
			     }

		       else
		       {
		       if(c<b)
		       {
		       if(c<d)
		       {
		       if(c<e)
		       {
			   min=c;
		       }
			else
			{
			  min=e;
			}
			}
			}
			}
			}
		 else
		 {
		 if(b<c)
		 {
		 if(b<d)
		 {
		 if(b<e)
		 {
		    min=b;
		 }
		 else
		 {
		    min=e;
		 }
		  }
		}
	      }


printf("minimum value is %d",min);
getch();
}

