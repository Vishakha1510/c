#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i;
float n,avg,sum=0;
clrscr();
printf("n= ");
 scanf("%f",&n);
	       for(i=0;i<n;i++)
	       {
	       scanf("%d",&a[i]);
	       }
	       printf("array elements are:");
	       for(i=0;i<n;i++)
	       {
	       printf("%d ",a[i]);
	       }
	       printf("\n");
		for(i=0;i<n;i++)
	       {
	       sum=sum+a[i];
	       avg=sum/n;
	       }
	       printf("average of elements is: %.2f",avg);
getch();
}