#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n;
clrscr();
printf("n= ");
scanf("%d",&n);
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


getch();
}