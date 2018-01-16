/*....................................................
* Author: Rajat Garg
* Problem Statement: Simple factorial of any number
......................................................*/
#include"stdio.h"

int main()
{
	int no, fact=1;
	printf("\nEnter any no: ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		fact*=i;
	}
	printf("factorial of %d is %d.",no,fact);
	return 0;
}

/*Output:
 Enter any no: 8
 factorial of 8 is 40320.
*/
