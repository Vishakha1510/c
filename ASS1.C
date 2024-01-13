#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,n;
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
	       printf("\nmatrix is : \n");

	       for(i=0;i<n;i++)
	       {
		printf("\n");
		    for(j=0;j<n;j++)
		       printf("%d\t",a[i][j]);
		  }
		  printf("\n\n");


		  printf("negative elements in matrix is : \n");
	  for(i=0;i<n;i++)
	  {
	   for(j=0;j<n;j++)
	    {
	       if(a[i][j]<0)
	      {
	      printf("%d\n",a[i][j]);
	      }
	    }
	  }





getch();
}