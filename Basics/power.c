#include<stdio.h>

int main()
{
	float base, expo;
	float product=1.0;
	printf("Enter the base number :");
	scanf("%f",&base);
	printf("Enter the exponent number :");
	scanf("%f",&expo);
	
	for(int i=1;i<=expo;i++)
	{
		product*=base;
	}
	printf("\n The %f power %f is %f",base,expo,product);
	return 0;
}
