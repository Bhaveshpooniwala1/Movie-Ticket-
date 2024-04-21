#include<stdio.h>
#include<conio.h>
//#include<graphics.h>
struct movie
{
	int n,t,s,a,b,c;
};
 main()
{
	struct movie s1;

//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"");

       //clrscr();

	printf("\n\n\n\t\t");
	printf("There Are The Movies Near Yuhhh..!!!");
	printf("\n\n\t\tBRAHAMSTRA\n\t\tSURYAVANSHI\n\t\tGANGUBAI");
	printf("\n\t\tKGF CHAPTER 2\n\t\tVIKRAM BEDA");
	printf("\n\n\t\tEnter Which Movie Yuhh Want To Watch..!!!");
	printf("\n\n\t\tPress 1 For BRAHAMASTRA");
	printf("\n\t\tPress 2 For SURYAVANSHI");
	printf("\n\t\tPress 3 For GANGUBAI");
	printf("\n\t\tPress 4 For KGF CHAPTER 2");
	printf("\n\t\tPress 5 For VIKRAM VEDHA");
	printf("\n\n\t\t=");
	scanf("%d",&s1.n);
	//cleardevice();
	//clrscr();
	if(s1.n==1)
	{
		printf("\n\n\n\n\t\tYou Have Selected BRAHAMSTRA..!!!");
		printf("\n\n\t\tBRAHAMASTRA Is Available in");
		printf("\n\n\t\tAnkita Multiplex");
		printf("\n\t\tGurusikh Goldmark");
		printf("\n\t\tStar Cinema");
		printf("\n\t\tShankar Cineplex");
		printf("\n\n\t\tSelect In Which Cinema You Want To Go..!!!");
		printf("\n\n\t\t1 For Ankita Multiplex");
		printf("\n\t\t2 For Gurusikh Goldmark");
		printf("\n\t\t3 For Star Cinema");
		printf("\n\t\t4 For Shankar Cineplex\n\n\n\t\t=");
		scanf("%d",&s1.t);


	//	cleardevice();
    //	clrscr();

		if(s1.t==1)
		{
			printf("\n\n\t\tYou Have Selected Ankita Multiplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t11:30 AM");
			printf("\n\t\t03:00 PM");
			printf("\n\t\t07:00 Pm");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 11;30 AM");
			printf("\n\t\tPress 2 For 03:00 PM");
			printf("\n\t\tPress 3 For 07:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);
		//	cleardevice();
		//	clrscr();

			if(s1.s==1)

			{
				printf("\n\n\t\tYou Have Selected 11:30 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

			//	cleardevice();
			//	clrscr();

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 03:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 07:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}

		}
		else if(s1.t==2)
		{
			printf("\n\n\t\tYou Have Selected Gurusikh Goldmark..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t12:00 PM");
			printf("\n\t\t03:00 PM");
			printf("\n\t\t09:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 12:00 PM");
			printf("\n\t\tPress 2 For 03:00 PM");
			printf("\n\t\tPress 3 For 09:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);
		//	cleardevice();
		//	clrscr();

			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 12:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 03:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 09:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}
		}
		else if(s1.t==3)
		{
			printf("\n\n\t\tYou Have Selected Star Cinema..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t12:00 PM");
			printf("\n\t\t06:00 PM");
			printf("\n\t\t10:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 12:00 AM");
			printf("\n\t\tPress 2 For 06:00 PM");
			printf("\n\t\tPress 3 For 10:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);

//			cleardevice();
//			clrscr();
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 12:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 06:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 10:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

//				cleardevice();
//				clrscr();
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}
		}
		else if(s1.t==4)
		{
			printf("\n\n\t\tYou Have Selected Shankar Cineplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t12:00 PM");
			printf("\n\t\t03:00 PM");
			printf("\n\t\t06:00 PM");
			printf("\n\t\t09:00 PM");
			printf("\n\n\t\t Enter Your Intrested Timing...");
			printf("\n\n\t\tPress 1 For 12:00 PM");
			printf("\n\t\tPress 2 For 03:00 PM");
			printf("\n\t\tPress 3 For 06:00 PM");
			printf("\n\t\tPress 4 For 09:00 PM\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 12:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER  =  60");
				printf("\n\t\tBALCONY = 120");
				printf("\n\t\tBOX     = 150");
				printf("\n\n\t\tEnter Your Intrested Seat...");
				printf("\n\t\tPress 1 For Silver\n\t\tPress 2 For Balcony\n\t\tPress 3 For Box\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*60;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected BALCONY...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*120;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected BOX...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 03:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER  =  60");
				printf("\n\t\tBALCONY = 120");
				printf("\n\t\tBOX     = 150");
				printf("\n\n\t\tEnter Your Intrested Seat...");
				printf("\n\t\tPress 1 For Silver\n\t\tPress 2 For Balcony\n\t\tPress 3 For Box\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*60;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected BALCONY...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*120;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected BOX...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 06:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER  =  60");
				printf("\n\t\tBALCONY = 120");
				printf("\n\t\tBOX     = 150");
				printf("\n\n\t\tEnter Your Intrested Seat...");
				printf("\n\t\tPress 1 For Silver\n\t\tPress 2 For Balcony\n\t\tPress 3 For Box\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*60;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected BALCONY...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*120;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected BOX...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			if(s1.s==4)
			{
				printf("\n\n\t\tYou Have Selected 09:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER  =  60");
				printf("\n\t\tBALCONY = 120");
				printf("\n\t\tBOX     = 150");
				printf("\n\n\t\tEnter Your Intrested Seat...");
				printf("\n\t\tPress 1 For Silver\n\t\tPress 2 For Balcony\n\t\tPress 3 For Box\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*60;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected BALCONY...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*120;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected BOX...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}
		}
		else
		{
			printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
		}

	}
	else if(s1.n==2)
	{
		printf("You Have Selected SURYAVANSHI..!!!");
		printf("\n\n\t\tSURYAVANSHI Is Available in");
		printf("\n\n\t\tAnkita Multiplex");
		printf("\n\t\tGurusikh Goldmark");
		printf("\n\n\t\tSelect In Which Cinema You Want To Go..!!!");
		printf("\n\n\t\t1 For Ankita Multiplex");
		printf("\n\t\t2 For Gurusikh Goldmark\n\n\t\t=");
		scanf("%d",&s1.t);

		if(s1.t==1)
		{
			printf("\n\n\t\tYou Have Selected Ankita Multiplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t02:30 PM");
			printf("\n\t\t09:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 02:30 AM");
			printf("\n\t\tPress 2 For 09:00 PM");
			printf("\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 02:30 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 09:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else 
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}
		}
		else if(s1.t==2)
		{
			printf("\n\n\t\tYou Have Selected Gurusikh Goldmark..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t04:00 PM");
			printf("\n\t\t06:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 04:00 PM");
			printf("\n\t\tPress 2 For 06:00 PM");
			printf("\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 04:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 09:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else 
			{
				printf("\n\n\t\t!!! Try Again Later !!!");
			}
		}
		else
		{
			printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
		}
	}
	else if(s1.n==3)
	{
		printf("\n\n\t\tYou Have Selected GANGUBAI..!!!");
		printf("\n\n\t\tGANGUBAI Is Available in");
		printf("\n\n\t\tAnkita Multiplex");
		printf("\n\n\t\tSelect In Which Cinema You Want To Go..!!!");
		printf("\n\n\t\t1 For Ankita Multiplex\n\n\t\t=");
		scanf("%d",&s1.t);

		if(s1.t==1)
		{
			printf("\n\n\t\tYou Have Selected Ankita Multiplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t05:30 PM");
			printf("\n\t\t10:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 05:30 PM");
			printf("\n\t\tPress 2 For 10:00 PM");
			printf("\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 05:30 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 05:30 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else 
			{
				printf("!!! Try Again Later !!!");
			}
		}
		else
		{
			printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
		}

	}
	else if(s1.n==4)
	{
		printf("You Have Selected KGF CHAPTER 2..!!!");
		printf("\n\n\t\tKGF CHAPTER 2 Is Available in");
		printf("\n\n\t\tAnkita Multiplex");
		printf("\n\t\tGurusikh Goldmark");
		printf("\n\t\tStar Cinema");
		printf("\n\n\t\tSelect In Which Cinema You Want To Go..!!!");
		printf("\n\n\t\t1 For Ankita Multiplex");
		printf("\n\t\t2 For Gurusikh Goldmark");
		printf("\n\t\t3 For Star Cinema\n\n\t\t=");
		scanf("%d",&s1.t);

		if(s1.t==1)
		{
			printf("\n\n\t\tYou Have Selected Ankita Multiplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t12:00 PM");
			printf("\n\t\t04:00 PM");
			printf("\n\t\t08:30 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 12:00 PM");
			printf("\n\t\tPress 2 For 04:00 PM");
			printf("\n\t\tPress 3 For 08:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 12:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 04:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 08:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);
				
				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
				
			}
			else 
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
		}
		else if(s1.t==2)
		{
			printf("\n\n\t\tYou Have Selected Gurusikh Goldmark..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t01:00 PM");
			printf("\n\t\t07:00 PM");
			printf("\n\t\t10:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 01:00 PM");
			printf("\n\t\tPress 2 For 07:00 PM");
			printf("\n\t\tPress 3 For 10:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);
			
			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 01:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 07:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 10:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 180");
				printf("\n\t\tGOLD   = 250");
				printf("\n\t\tVIP    = 350");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*180;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*250;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*350;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
		}
		else if(s1.t==3)
		{
			printf("\n\n\t\tYou Have Selected Star Cinema..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t01:00 PM");
			printf("\n\t\t07:00 PM");
			printf("\n\t\t10:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 01:00 PM");
			printf("\n\t\tPress 2 For 07:00 PM");
			printf("\n\t\tPress 3 For 10:00 Pm\n\n\t\t=");
			scanf("%d",&s1.s);

			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 01:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 07:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==3)
			{
				printf("\n\n\t\tYou Have Selected 10:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else
			{
				printf("\n\n\t\t!!! Please Try Again !!!");
			}

		}
		else
		{
			printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
		}

	}
	else if(s1.n==5)
	{
		printf("You Have Selected VIKRAM BEDA..!!!");
		printf("\n\n\t\tVIKRAM VEDHA Is Available in");
		printf("\n\n\t\tAnkita Multiplex");
		printf("\n\t\tStar Cinema");
		printf("\n\n\t\tSelect In Which Cinema You Want To Go..!!!");
		printf("\n\n\t\t1 For Ankita Multiplex");
		printf("\n\t\t2 For Star Cinema\n\n\t\t=");
		scanf("%d",&s1.t);

		if(s1.t==1)
		{
			printf("\n\n\t\tYou Have Selected Ankita Multiplex..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t01:00 PM");
			printf("\n\t\t06:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 01:00 PM");
			printf("\n\t\tPress 2 For 06:00 PM");
			printf("\n\n\t\t=");
			scanf("%d",&s1.s);

			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 01:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 06:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 230");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*230;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

			}
			else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}

		}
		else if(s1.t==2)
		{
			printf("\n\n\t\tYou Have Selected Star Cinema..!!!");
			printf("\n\n\t\tYour Shows Timings are...");
			printf("\n\t\t03:00 PM");
			printf("\n\t\t04:00 PM");
			printf("\n\n\t\tEnter Your Intrested Timing..!!!");
			printf("\n\n\t\tPress 1 For 03:00 PM");
			printf("\n\t\tPress 2 For 04:00 PM");
			printf("\n\n\t\t=");
			scanf("%d",&s1.s);

			if(s1.s==1)
			{
				printf("\n\n\t\tYou Have Selected 03:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			if(s1.s==2)
			{
				printf("\n\n\t\tYou Have Selected 04:00 PM Time..!!!");
				printf("\n\n\t\tSeats And Rates Are...");
				printf("\n\t\tSILVER = 150");
				printf("\n\t\tGOLD   = 200");
				printf("\n\t\tVIP    = 300");
				printf("\n\n\t\tPress = \n\t\t1 For Silver\n\t\t2 For Gold\n\t\t3 For Vip\n\n\t\t=");
				scanf("%d",&s1.a);

				if(s1.a==1)
				{
					printf("\n\n\t\tYou Have Selected SILVER...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*150;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==2)
				{
					printf("\n\n\t\tYou Have Selected GOLD...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*200;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else if(s1.a==3)
				{
					printf("\n\n\t\tYou Have Selected VIP...");
					printf("\n\n\t\tEnter How Many Ticket's You Want \n\n\t\t=");
					scanf("%d",&s1.b);
					s1.c=s1.b*300;
					printf("\n\n\t\tYour Total is = %d Rs only",s1.c);
				}
				else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
			}
			else
				{
					printf("\n\n\t\t!!! Try Again Later !!!");
				}
		}
		else
		{
			printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
		}

	}
	else
	{
		printf("\n\n\t\t!!! PLEASE TRY AGAIN !!!");
	}
	getch();
	//closegraph();
}
