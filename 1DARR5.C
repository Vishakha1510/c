#include<stdio.h>
#include<conio.h>
void main()
{
int a1[10],i,a2[10],n1,n2,c[100];
clrscr();
printf("n1= ");
scanf("%d",&n1);
	       for(i=0;i<n1;i++)
	       {
	       scanf("%d",&a1[i]);
	       }
	       printf("elements of first array are: ");
	       for(i=0;i<n1;i++)
	       {
	       printf("%d ",a1[i]);
	       }
	       printf("\n");
printf("n2= ");
scanf("%d",&n2);
	       for(i=0;i<n2;i++)
	       {
	       scanf("%d",&a2[i]);
	       }
	       printf("elements of second array are: ");
	       for(i=0;i<n2;i++)
	       {
	       printf("%d ",a2[i]);
	       }
	       printf("\n");
	       printf("array elements are:");
	       for(i=0;i<n1+n2;i++)
	       {
	       if(i<n1)
	       {
	       printf("%d ",c[i]=a1[i]);
	       }
	       else
	       {
	       printf("%d ",c[i]=a2[i-n1]);
	       }
	       }


getch();
}