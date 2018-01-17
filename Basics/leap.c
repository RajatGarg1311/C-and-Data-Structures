#include<stdio.h>
int main()
{
	int yr;
	printf("enter year");
	scanf("%d",&yr);
	((yr%4==0 && yr%100!=0) || yr%400==0)? printf("it is leap year%d",yr): printf("not a leap year"); 
	return 0;
}
