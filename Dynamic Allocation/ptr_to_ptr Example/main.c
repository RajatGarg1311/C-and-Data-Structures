#include<stdio.h>
#include"head.h"

int main()
{
	//double pointer
	int **matrix =NULL;
	matrix=accept(matrix);
	printf("\nmain entered");
	display(matrix);
	
	return 0;
}
