#include<stdio.h>
#include<conio.h>
void main()
{
int l;
clrscr();
printf("enter 1 for english\n");
printf("enter 2 for hindi\n");
printf("enter 3 for gujarati\n");
scanf("%d",&l);
clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("enter 1 for sim card\n");
	       printf("enter 2 for jio fiber\n");
	       printf("enter 3 for data info\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("welcome to sim details\n");
	       switch(l)
	       {
	       case 1:
	       printf("enter 1 to avtivate sim\n");
	       printf("enter 2 to deactivate sim\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("sim activated");
	       break;
	       case 2:
	       printf("sim deactivated");
	       break;
	       default:
	       printf("invalid input");
	       break;
	       }
	       break;
	       }
	       break;

			case 2:
			printf("welcome to jio fiber\n");
			switch(l)
			{
			case 2:
			printf("enter 1 to activate jio fiber\n");
			printf("enter 2 to deactivate jio fiber\n");
			scanf("%d",&l);
			clrscr();
			switch(l)
			{
			case 1:
			printf("jio fiber activated");
			break;
			case 2:
			printf("jio fiber deactivated");
			break;
			default:
			printf("invalid input");
			break;
			}
			break;
			}
			break;

					case 3:
					printf("welcome to data info\n");
					switch(l)
					{
					case 3:
					printf("enter 1 to activate data\n");
					printf("enter 2 to deactivate data\n");
					scanf("%d",&l);
					clrscr();
					switch(l)
					{
					case 1:
					printf("data plan activated");
					break;
					case 2:
					printf("data plan deactivated");
					break;
					default:
					printf("invalid input");
					break;
					}
					break;
					}
					break;
					}
					break;


	     case 2:
	       printf("sim card ke liye 1 dabaye\n");
	       printf("jio fiber ke liye 2 dabaye\n");
	       printf("data jankari ke liye 3 dabaye\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("sim details mai apka swagat hai\n");
	       switch(l)
	       {
	       case 1:
	       printf("sim chalu karvane ke liye 1 dabaye\n");
	       printf("sim band karvane ke liye 2 dabaye\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("apka sim chalu ho gaya hai");
	       break;
	       case 2:
	       printf("apka sim band ho gaya");
	       break;
	       default:
	       printf("invalid input");
	       break;
	       }
	       break;
	       }
	       break;


			case 2:
			printf("jio fiber mai apka swagat hai\n");
			switch(l)
			{
			case 2:
			printf("jio fiber chalu karavane k liye 1 dabaye\n");
			printf("jio fiber band karvane k liye 2 dabaye\n");
			scanf("%d",&l);
			clrscr();
			switch(l)
			{
			case 1:
			printf("jio fiber chalu ho gaya hai");
			break;
			case 2:
			printf("jio fiber band ho gaya hai");
			break;
			default:
			printf("invalid input");
			break;
			}
			break;
			}
			break;



					case 3:
					printf("data mahiti mai apka swagat hai\n");
					switch(l)
					{
					case 3:
					printf("data plan chalu karvane k liye 1 dabaye\n");
					printf("data plan band karvane k liye 2 dabaye\n");
					scanf("%d",&l);
					clrscr();
					switch(l)
					{
					case 1:
					printf(" apka data plan chalu ho gaya hai");
					break;
					case 2:
					printf("apka data plan band ho gaya");
					break;
					default:
					printf("invalid input");
					break;
					}
					break;
					}
					break;
					}
					break;


	       case 3:
	       printf("sim card mate 1 dabavo\n");
	       printf("jio fiber mate 2 dabavo\n");
	       printf("data info mate 3 dabavo\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("sim details ma apnu swagat che\n");
	       switch(l)
	       {
	       case 1:
	       printf("sim chalu karava 1 dabavo\n");
	       printf("sim band karava 2 dabavo\n");
	       scanf("%d",&l);
	       clrscr();
	       switch(l)
	       {
	       case 1:
	       printf("tamaru sim chalu thai gayu che");
	       break;
	       case 2:
	       printf("tamaru sim band thai gayu che");
	       break;
	       default:
	       printf("invalid input");
	       break;
	       }
	       break;
	       }
	       break;


			case 2:
			printf("jio fiber ma apnu swagat che\n");
			switch(l)
			{
			case 2:
			printf("jio fiber chalu karava 1 dabavo\n");
			printf("jio fiber band karava 2 dabavo\n");
			scanf("%d",&l);
			clrscr();
			switch(l)
			{
			case 1:
			printf("tamaru jio fiber chalu thai gayu che");
			break;
			case 2:
			printf("tamaru jio fiber band thai gayu che");
			break;
			default:
			printf("invalid input");
			break;
			}
			break;
			}
			break;



					case 3:
					printf("data mahiti ma apnu swagat che\n");
					switch(l)
					{
					case 3:
					printf("data chalu karava 1 dabavo\n");
					printf("data band karava 2 dabavo\n");
					scanf("%d",&l);
					clrscr();
					switch(l)
					{
					case 1:
					printf("tamaru data plan chalu thai gayu che");
					break;
					case 2:
					printf("tamaru data plan band thai gayu che");
					break;
					default:
					printf("invalid input");
					break;
					}
					break;
					}
					break;
					}
					}
getch();
}
