#include<stdio.h>
int main()
{
	long int no,temp;
	int sum=0;
	printf("enter any number");
	scanf("%ld",&no);
	while(no !=0)
	{
		temp=no%10;
		sum +=temp;
		no/=10;
	}
	printf("sum is %d",sum);
	
	return 0;
}
