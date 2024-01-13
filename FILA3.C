#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int i,j=0;
clrscr();
printf("Enter string: ");
gets(s);
printf("string before removing empty spaces=%s\n",s);
		 for(i=0;s[i]!='\0';i++)
		 {
		   s[i]=s[i+j];
			       if(s[i]==' ' || s[i]=='\t')
			       {
				 j++;
				 i--;
			       }
		 }
		 printf("string after removing empty spaces=%s\n",s);

getch();
}