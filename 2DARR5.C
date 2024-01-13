#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,n,sum;
clrscr();
printf("n= ");
scanf("%d",&n);
	      printf("input elements in the matrix: \n");
	       for(i=0;i<n;i++)
	       {
		  for(j=0;j<n;j++)
		  {
		printf("element - [%d],[%d] : ",i,j);
		scanf("%d",&a[i][j]);
		   }
	       }
	       printf("matrix 1 is : ");
	       for(i=0;i<n;i++)
	       {
	       printf("\n");
		    for(j=0;j<n;j++)
		       printf("%d\t",a[i][j]);
		  }
		  printf("\n");


	       for(i=0;i<n;i++)
	      {
	      sum=0;
		  for(j=0;j<n;j++)
		  {

		    sum=sum+a[i][j];
		    }
		    printf("sum of row%d is: %d\n",i+1,sum);
		     }

getch();
}