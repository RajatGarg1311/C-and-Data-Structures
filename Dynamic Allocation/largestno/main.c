#include<stdio.h>
#include"head.h"

int main()
{
	int lar;
	int **mat=NULL;
	mat=acceptno(mat);
	//printf("in main")
	lar=largestno(mat);
	//displayno(mat);
	printf("\nlargest no is %d",lar);
	return 0;
}
