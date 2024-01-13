#include<stdio.h>
int main()
{
	int a,b;
	int temp;
	int *i;
	int *j;
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
i=&a;
j=&b;
printf("before swapping:\na=%d\nb=%d\n",*i,*j);
temp=*i;
*i=*j;
*j=temp;
printf("after swapping:\na=%d\nb=%d",*i,*j);
}
