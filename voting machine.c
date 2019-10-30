#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	int total=0,can1=0,can2=0,can3=0,can4=0,can5=0,can6=0,can7=0,can8=0,can9=0,can10=0,e,dec=1,g;
	start:
	printf("\t\t\t****************WELCOME TO ELECTION 2017***********************");
	printf("\nEnter Your Age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Welcome To Voting System.\nEnter 1 to start voting : ");
	    scanf("%d",&e);
	if(dec==1)
	{
		printf("\nType 1 to vote for can1:Rahul Modi");
		printf("\nType 2 to vote for can2:Vedant Gandhi");
		printf("\nType 3 to vote for can3:Gaurav Gupta");
		printf("\nType 4 to vote for can4:");
		printf("\nType 5 to vote for can5:");
		printf("\nType 6 to vote for can6:");
		printf("\nType 7 to vote for can7:");
		printf("\nType 8 to vote for can8:");
		printf("\nType 9 to vote for can9:");
		printf("\nType 10 to vote for can10:\n\n");
		scanf("%d",&e);
		printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
		switch(e)
		{
			case 1:
				can1=can1+1;
				break;
			case 2:
				can2=can2+1;
				break;
			case 3:
				can3=can3+1;
				break;
			case 4:
				can4=can4+1;
				break;
			case 5:
				can5=can5+1;
				break;
			case 6:
				can6=can6+1;
				break;
			case 7:
				can7=can7+1;
				break;
			case 8:
				can8=can8+1;
				break;
			case 9:
				can9=can9+1;
				break;
			case 10:
				can10=can10+1;
				break;
		default:
			printf("\nSorry Invalid entry!!!\n\n\n\n ****TRY AGAIN****");
		}
		total=total+1;
		printf("\n\n\nTotal Votes Casted: %d",total);
		printf("\ncan1  : %d",can1);
		printf("\ncan2  : %d",can2);
		printf("\ncan3  : %d",can3);
		printf("\ncan4  : %d",can4);
		printf("\nCan5  : %d",can5);
		printf("\nCan6  : %d",can6);
		printf("\nCan7  : %d",can7);
		printf("\nCan8  : %d",can8);
		printf("\nCan9  : %d",can9);
		printf("\nCan10 : %d",can10);
		printf("\nDo you want to continue!? For Yes press 1 & For No press 0 : ");
		scanf("%d",&g);
		if(g==1)
		{
		goto start;
		}
		else
		{
		printf("\n********THANK YOU FOR VOTING*********");
		}
	}
}
	else
	printf("You Aren't Eligible For Voting!!!");
	getch();
}
