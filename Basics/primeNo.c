#include<stdio.h>

int main()
{
	int no1;
	int flag=0;
	printf("\n Enter a Number to check if it is a prime no. or Composite no. \n");
	scanf("%d",&no1);
	if(no1 > 1)
	{
		for(int i=2; i<=(no1)/2;i++)
		{
			if((no1%i)==0)
			{
				flag =1;
				
				break;
			}
			
		}
		if(flag == 0){
				printf("It is a prime no");		
		}
		else{
			printf("It is a Composite no");		
		}
		
	}
	else{
			printf("It is a niether prime nor composite no");		
		}
	return 0;
}
