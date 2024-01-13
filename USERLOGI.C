#include<stdio.h>
#include<conio.h>
void main()
{
int us=1234,pw=5678;
int usd,pass;
clrscr();
printf("username= ",usd);
scanf("%d",&usd);
printf("password= ",pass);
scanf("%d",&pass);
				 if(usd==us)
				 {
					   if(pass==pw)
					   {
					      printf("login success");
					   }

					   else
					   {
					    printf("password incorrect");
					   }
				  }
				  else
				  {         if(pass==pw)
					    {
					       printf("username incorrect");
					    }
					    else
					    {
					       printf("both incorrect");
					     }
				   }



getch();
}