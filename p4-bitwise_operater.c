#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a,b,Not,i,restart;
	l1:
	system("cls");
	printf("\t\t\t\tWElCOME TO BITWISE OPERATOR\n\n");
	printf("1. AND   operator\n2. OR    operator\n3. XOR    operator\n4. left swift operator\n5. right swift operator\n6. NOT operator\n");
	scanf("%d",&i);
	system("cls");
	if(i==1)
	{
		printf("\n\t\t\tBitwise AND Operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		printf("enter the value of b:");
		scanf("%d",&b);
		printf("\nthe value of a&b is %d",a&b);
	}
	else if(i==2)
	{
		printf("\n\t\t\tBitwise OR Operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		printf("enter the value of b:");
		scanf("%d",&b);
		printf("the value of a|b is %d",a|b);
	}
	else if(i==3)
	{
		printf("\n\t\t\tBitwise XOR Operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		printf("enter the value of b:");
		scanf("%d",&b);
		printf("the value of a^b is %d",a^b);
	}
	else if(i==4)
	{
		printf("\n\t\t\tBitwise left swift operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		printf("enter the numbers you want to left swift:");
		scanf("%d",&b);
		printf("the value of a<<b is %d",a<<b);
	}
	else if(i==5)
	{
		printf("\n\t\t\tBitwise right swift operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		printf("enter the numbers you want to right swift:");
		scanf("%d",&b);
		printf("the value of a>>b is %d",a>>b);
	}
	else if(i==6)
	{
		printf("\n\t\t\tBitwise NOT Operator\n");
		printf("\nenter the value of a:");
		scanf("%d",&a);
		Not= ~a;
		printf("the value of ~a is %d",Not);
	}
	printf("\n\nEnter any key to continue.....");
	getch();
	system("cls");
	l2:
	printf("\npress 1 to restart otherwise press 0 to exit: ");
		scanf("%d",&restart);
		if(restart==1)
		{
			goto l1;
		}
		else if(restart==0)
		{
			for(;;)
			{
				break;
			}
		}
		else
		{
			system("cls");
			goto l2;
		}
}
