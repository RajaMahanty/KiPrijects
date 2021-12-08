//TIC - TAC - TOE (USER VS COMPUTER) 
#include<stdio.h>
#include<windows.h>

int i,num=9,temp2;
char a[12]="   |   |   ";
char b[12]="   |   |   ";
char c[12]="   |   |   ";
char name[]="";

void rcheck();
void fscreen();
void pgame();
void play();
void mmenu();
void logic();
void pc();

void rcheck()
{
	if(a[1] == 'x' && b[1] == 'x' && c[1] == 'x')
	{
		system("cls");
		Beep(1000,1000);
		printf("\n\n\t\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(a[5] == 'x' && b[5] == 'x' && c[5] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(a[9] == 'x' && c[9] == 'x' && c[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(a[1] == 'x' && a[5] == 'x' && a[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(b[1] == 'x' && b[5] == 'x' && b[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(b[1] == 'x' && b[5] == 'x' && b[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(c[1] == 'x' && c[5] == 'x' && c[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		exit(0);
	}
	if(a[1] == 'x' && b[5] == 'x' && c[9] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		mmenu();
	}
	if(a[9] == 'x' && b[5] == 'x' && c[1] == 'x')
	{
		system("cls");
		printf("\n\n\t\t\tCongratulation You Have Won The Game......");
		Sleep(5000);
		mmenu();
	}
	
	
	if(a[1] == 'o' && b[1] == 'o' && c[1] == 'o')
	{
		system("cls");
		Beep(1000,1000);
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(a[5] == 'o' && b[5] == 'o' && c[5] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(a[9] == 'o' && c[9] == 'o' && c[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(a[1] == 'o' && a[5] == 'o' && a[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(b[1] == 'o' && b[5] == 'o' && b[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(b[1] == 'o' && b[5] == 'o' && b[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(c[1] == 'o' && c[5] == 'o' && c[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(a[1] == 'o' && b[5] == 'o' && c[9] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}
	if(a[9] == 'o' && b[5] == 'o' && c[1] == 'o')
	{
		system("cls");
		printf("\n\n\t\t\t\tYou Lose, Better Luck Next Time.......");
		Sleep(5000);
		mmenu();
	}	
}

void pc()
{
	if(a[1] == ' ')
	{
		a[1]='o';
	}
	else if(a[5] == ' ')
	{
		a[5]='o';
	}
	else if(a[9] == ' ')
	{
		a[9]='o';
	}
	else if(b[1] == ' ')
	{
		b[1]='o';
	}
	else if(b[5] == ' ')
	{
		b[5]='o';
	}
	else if(b[9] == ' ')
	{
		b[9]='o';
	}
	else if(c[1] == ' ')
	{
		c[1]='o';
	}
	else if(c[5] == ' ')
	{
		c[5]='o';
	}
	else if(c[9] == ' ')
	{
		c[9]='o';
	}
}

void logic()
{
	if(temp2 == 1)
	{
		if(a[1] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			a[1]='x';
		}
	}
	else if(temp2 == 2)
	{
		if(a[5] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			a[5]='x';
		}
	}
	else if(temp2 == 3)
	{
		if(a[9] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			a[9]='x';
		}
	}
	else if(temp2 == 4)
	{
		if(b[1] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			b[1]='x';
		}
	}
	else if(temp2 == 5)
	{
		if(b[5] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			b[5]='x';
		}
	}
	else if(temp2 == 6)
	{
		if(b[9] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			b[9]='x';
		}
	}
	else if(temp2 == 7)
	{
		if(c[1] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			c[1]='x';
		}
	}
	else if(temp2 == 8)
	{
		if(c[5] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			c[5]='x';
		}
	}
	else if(temp2 == 9)
	{
		if(c[9] == 'x')
		{
			printf("!INVALID!\t That space is full.");
		}
		else
		{
			c[9]='x';
		}
	}
	else
	{
		system("cls");
		Beep(750,1000);
		printf("!!!PLEASE ENTER A VALID OPTION!!!\n");
		Sleep(1500);
		for(i=5;i>=1;i--)
		{
			system("cls");
			printf("!!!PLEASE ENTER A VALID OPTION!!!\nRestarting In: %d Seconds",i);
			Sleep(1000);
			system("cls");
		}
		Sleep(1500);
		play();
	}
}

void play()
{
	system("cls");
	printf("Enter the user name:- ");
	scanf("%s",&name);
	Sleep(1000);
	system("cls");
	for(i=5;i>=1;i--)
	{
		printf("Enter the user name:- %s",name);
		printf("\nThe Game is Starting in %d seconds....",i);
		Sleep(1000);
		system("cls");
	}
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Player'sTurn:\n");
	pgame();
	printf("\nEnter a number :- ");
	scanf("%d",&temp2);
	logic();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	pgame();
	rcheck();
	Sleep(500);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	printf("Dumb Machine's Turn:\n");
	pc();
	pgame();
	Sleep(750);
	system("cls");
	printf("Player %s VS Dumb Machine........\n",name);
	rcheck();
	
}

void main()
{
	fscreen();
}

void pgame()
{
	printf("\n");
	for(i=0;i<=10;i++)
	{
		printf("%c",a[i]);
		Sleep(50);
	}
	printf("\n");
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("\n");
	for(i=0;i<=10;i++)
	{
		printf("%c",b[i]);
		Sleep(50);
	}
	printf("\n");
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("---");
	Sleep(50);
	printf("\n");
	for(i=0;i<=10;i++)
	{
		printf("%c",c[i]);
		Sleep(50);
	}
	printf("\n");
}

void mmenu()
{
	int temp;
	
	system("cls");
	printf("\t\t\t\t(1) Play\n\n");
	printf("\t\t\t\t(2) Quit\n\n");
	printf("\t\t\tPlease Chose The Number From Option: ");
	scanf("%d",&temp);
	if(temp == 1)
	{
		system("cls");
		play();
	}
	else if(temp == 2)
	{
		exit(0);
	}
	else
	{
		system("cls");
		Beep(750,1000);
		printf("!!!PLEASE ENTER A VALID OPTION!!!\n");
		Sleep(1500);
		for(i=5;i>=1;i--)
		{
			system("cls");
			printf("!!!PLEASE ENTER A VALID OPTION!!!\nThe Menu Will Appear In: %d Seconds",i);
			Sleep(1000);
			system("cls");
		}
		Sleep(1500);
		mmenu();
	}
}

void fscreen()
{
	
	system("cls");
	printf("\t\t\t\t\tTIC");
	Sleep(100);
	printf("-");
	Sleep(100);
	printf("TAC");
	Sleep(100);
	printf("-");
	Sleep(100);
	printf("TOE\n\n\n");
	Sleep(100);
	printf("\t\t     This ");
	Sleep(100);
	printf("Game ");
	Sleep(100);
	printf("Is ");
	Sleep(100);
	printf("Created ");
	Sleep(100);
	printf("By ");
	Sleep(100);
	printf("RAJA & ");
	Sleep(100);
	printf("GOURINATRH & ");
	Sleep(100);
	printf("SOURAV");
	Sleep(100);
	
	getch();
	system("cls");
	mmenu();
}
