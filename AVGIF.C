#include<stdio.h>
#include<conio.h>
void main()
{
float s1,s2,s3,avg;
clrscr();
printf("marks of s1: ",s1);
scanf("%f",&s1);
printf("s2: ",s2);
scanf("%f",&s2);
printf("s3: ",s3);
scanf("%f",&s3);
avg=(s1+s2+s3)/3;
printf("avg is %.2f\n",avg);
			   if(avg>80)
			   {
				printf("remark:a+,excellent");
			   }
			   else
			   {
			       if(avg>70)
			       {
				  printf("remark:a,very good");
			       }
			       else
			       {
				   if(avg>60)
				   {
					printf("remark:b+,good");
				   }
				   else
				   {
					 if(avg>50)
					 {
					      printf("remark:b,need to work hard");
					 }
					 else
					 {
					      if(avg>33)
					      {
						 printf("remark:c,poor");
					      }
					      else
					      {
						  if(avg<33)
						  {
						      printf("remark:d,fail");
						  }
					       }
					  }
				    }
			       }
			   }
getch();
}