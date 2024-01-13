#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,temp,i,j;
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
		  printf("\nsecond largest number is:");
	       for(i=0;i<n;i++)
	       {
		  for(j=i+1;j<n;j++)
		  {
		    if(a[i]<a[j])
		    {
		      temp=a[i];
		      a[i]=a[j];
		      a[j]=temp;
		    }
		  }
		}
		printf("%d",a[1]);

getch();
}