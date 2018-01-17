#include<stdio.h>
int main()
{
	int no1,no2=0;
	
int min=1,max=100000;
	while(1)
	{
	printf("Enter the digit number to reverse (max 5 digits):");
		scanf("%d",&no1);
		if(no1<=max && no1>=min)
		{
			while(no1 != 0)
			{
				no2 =no2+(no1 % 10);
				no2*=10;
				no1 /= 10;
			}
			no2/=10;
			printf("reverse of digits is= %d\n",no2);
			break;
		}
		else
		{
			printf("\n Not a valid input\n");
			continue;
		}
	
	}

	return 0;
}
