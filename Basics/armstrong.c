/*/*....................................................
* Author: Rajat Garg
* Problem Statement: Armstrong Numbers between 1 to 10000
......................................................*/

#include<stdio.h>

int main()
{
	int no, digits;
	int arm=1,temp=1,sum=0;
	for(int i=1;i<=9999;i++)
	{
		no=i;
		digits=0;
		while(no != 0)	// count number of digitscv
		{
			no = no / 10;
			digits++;
		}
		no=i;
		sum=0;
		for(int j=1;j<=digits;j++)	//power function
		{
			arm=no%10;
			temp=1;
			for(int k=1;k<=digits;k++)
				temp*=arm;
			sum+=temp;
			no/=10;
		}
		if(i==sum)
			printf("\n%d is an armstrong number.",sum);
	}
	return 0;
}


/*Output:
1 is an armstrong number.
2 is an armstrong number.
3 is an armstrong number.
4 is an armstrong number.
5 is an armstrong number.
6 is an armstrong number.
7 is an armstrong number.
8 is an armstrong number.
9 is an armstrong number.
153 is an armstrong number.
370 is an armstrong number.
371 is an armstrong number.
407 is an armstrong number.
1634 is an armstrong number.
8208 is an armstrong number.
9474 is an armstrong number.
*/
