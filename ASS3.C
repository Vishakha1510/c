#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],b[20][20],i,j,n,sum[20][20];
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
		      for(j=0;j<n;j++)
		      {
			b[j][i]=a[i][j];
		      }
		   }
		printf("\ntranspose matrix elements are: \n");

		 for(i=0;i<n;i++)
		 {
		      for(j=0;j<n;j++)
		      {
			printf("%d\t",b[i][j]);
		      }
		      printf("\n");
		 }
getch();
}