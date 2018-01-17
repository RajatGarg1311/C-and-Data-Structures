#include<stdio.h>
#include<malloc.h>
#include"head.h"

//int row,col;
row=1;
col=1;
int** accept(int **mat)
{
	//double pointer
	printf("enter the size of row and column\n");
	scanf("%d%d",&row,&col);
	
	mat = (int**)malloc(sizeof(int)*row);
	for(int i=0;i<row;i++)
		mat[i] = (int*)malloc(sizeof(int)*col);
	printf("\n Enter matrix value of row=%d and col=%d\n",row,col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			scanf("%d",(*(mat+i)+j));
		}	
	
	return mat;
}

void display(int **m)
{
	//double pointer
	printf("\ndisplay function entered%d %d",row,col);
	for(int i=0;i<row;i++)
	{
		printf("\n");
		for(int j=0;j<col;j++)
		{
			printf("%d\t",*(*(m+i)+j));
		}
		
	}
	printf("\n");
}

