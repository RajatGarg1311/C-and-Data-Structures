#include<stdio.h>
#include<malloc.h>
#include"head.h"
row=3;
col=3;
int** acceptno(int **matrix)
{
	
	matrix=(int**) malloc((sizeof(int) * row));
	for(int i=0; i<row; i++)
		matrix[i]=(int*) malloc((sizeof(int) * col));
	printf("enter the 2D array"); 
	for(int i=0; i<row; i++)  
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d",(*(matrix+i)+j));
		}
		
	}  
	return matrix;

}
int largestno(int **matrix)
{
	int l=*(*(matrix+0)+0);
	int temp=0;
	for(int i=0; i<row; i++)  
	{
		for(int j=0; j<col; j++)
		{
			if(l< (*(*(matrix+i)+j)))
			{
				temp=*(*(matrix+i)+j);
			}
			
		}
		l=temp;
		
	}
	return l; 
}

/*void displayno(int **matrix)
{
	printf("in display");
	for(int i=0; i<row; i++)  
	{
		for(int j=0; j<col; j++)
		{
			printf("%d\t",*(*(matrix+i)+j));
		}
		printf("\n");
	}
}
*/
