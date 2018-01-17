#include<stdio.h>

void display();
int main()
{
	
	display();
	display();
	display();
	
	return 0;
}

void display()
{
	static int i= 0;
	i++;
	printf("\ni = %d",i);
}
