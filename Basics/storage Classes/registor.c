#include<stdio.h>

int main()
{
	//by default storage class of variable is automatic.
	register int num=10;
	printf("Inside a main\n");
	printf("value of num = %d\n",num);
	{
		//Inside the block.
		register int num=1;
		printf("Inside a main\n");
		printf("value of num = %d\n",num);
	}
		//outside the block.
	printf("outside a main\n");
	printf("value of num = %d\n",num);
	
	return 0;
}
