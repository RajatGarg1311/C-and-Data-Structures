#include<stdio.h>

int main()
{
	int choice;
	int a,b;
	printf("\n**********Operations*********\n");
	printf("\n1.Arithmetic Operators\n2.Relational Operators\n3.Logical Operators\n4.Bitwise Operators\n");
	printf("\n*******************************\n");
	printf("\nPlease Enter your choice of Operation:\t");
	scanf("%d",&choice);
	
	switch(choice)                                                    // Outer Switch is begin
	{
		case 1:
			
			printf("\n**********Select Arithmetic operations***************\n");    //Arithmetic operations
			printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
			printf("\n*******************************\n");
			printf("\nPlease Enter your choice of Operation:\t");
			scanf("%d",&choice);
			switch(choice)                                            // Inner Switch is begin
			{
				case 1:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Addition of %d and %d is %d",a,b,a+b);
				break;
				case 2:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Subtraction of %d - %d is %d",a,b,a-b);
				break;
				case 3:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Multiplication of %d X %d is %d",a,b,a*b);
				break;
				case 4:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Division of %d / %d is %d",a,b,a/b);
				break;
				default:
					printf("\n Invalid Operation");
				break;

			}
		break;
		case 2:
			
			printf("\n**********Select Relational operations***************\n");   //Relational operations
			printf("\n1.Not Equal\n2.Greater or Lesser\n");
			printf("\n*******************************\n");
			printf("\nPlease Enter your choice of Operation:\t");

			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					if(a!=b)
						printf("\n %d and %d are not equal",a,b);
					else
						printf("\n %d and %d are not equal",a,b);
				break;
				case 2:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					if(a<b)
						printf("\n  %d is less than %d.",a,b);
					else
						printf("\n  %d is greater than %d.",a,b);
				break;
				default:
					printf("\n Invalid Operation");
				break;

			}
		break;
		case 3:
			printf("\n**********Select Logical operations***************\n");      //Logical operations
			printf("\n1.AND\n2.OR\n3.NOT\n");
			printf("\n*******************************\n");
			printf("\nPlease Enter your choice of Operation:\t");

			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Anding of %d and %d is %d",a,b,a&&b);
				break;
				case 2:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n Oring of %d and %d is %d",a,b,a||b);
				break;
				case 3:
					printf("\n Enter a numbers");
					scanf("%d",&a);
					printf("\n Not of %d is %d",a,!a);
				break;
				default:
					printf("\n Invalid Operation");
				break;

			}
		break;
		case 4:
			printf("\n**********Select Bitwise operations***************\n");      //Bitwise operations
			printf("\n1.AND\n2.OR\n3.XOR\n");
			printf("\n*******************************\n");
			printf("\nPlease Enter your choice of Operation:\t");

			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n And of %d and %d is %d",a,b,a&b);
				break;
				case 2:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n OR of %d and %d is %d",a,b,a|b);
				break;
				case 3:
					printf("\n Enter two numbers");
					scanf("%d%d",&a,&b);
					printf("\n XOR of %d and %d is %d",a,b,a^b);
				break;
				default:
					printf("\n Invalid Operation");
				break;
			}
		break;
		default:
			printf("\n Invalid Operation");
		break;
	}
	
	return 0;
}
