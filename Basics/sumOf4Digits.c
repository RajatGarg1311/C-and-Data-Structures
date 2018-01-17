#include<stdio.h>
int main()
{
	int no1,sum=0;
	while(1)
	{
		printf("Enter the four digit number:");
		scanf("%d",&no1);
		if(no1<=9999 && no1>=1000)
		{
			while(no1 != 0)
			{
				sum+= no1 % 10;
				no1 /= 10;
			}
			printf("Sum of digits is= %d\n",sum);
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
