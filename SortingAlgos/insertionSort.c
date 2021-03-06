#include<stdio.h>
#include<stdlib.h>

int arr1[10]={0};
int n=0;
//function Declaration
void insertionSort(int []);
void printArray(int []);

int main()
{
	int cnt=0;
	printf("\nEnter the no of elements to be sorted:\t");
	scanf("%d",&n);
	if(n>10)
	{
		printf("Size exceeds!!! ");
		exit(1);
	}
	/*Accept Values from User*/
	for(int i=0;i<n;i++)
	{
		printf("Enter Element %d:\t",i+1);
		scanf("%d",&arr1[i]);
	}
	/*Print the Array given*/
	printf("\nThe given Array is :\n");
	while(cnt < n)
	{
		printf("| %d |",arr1[cnt]);
		cnt++;
	}
	insertionSort(arr1);
	return 0;
}

void printArray(int arr[10])
{
	int cnt=0;
	while(cnt < n)
	{
		printf("| %d |",arr[cnt]);
		cnt++;
	}
}

void insertionSort(int arr[10])
{
	int key,i,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for( j=i-1;j >= 0;j--)
		{
			if(arr[j]>key)
				arr[j+1]=arr[j];
			if(j>=0)
			{
				printf("\nThe Partly Sorted Array is :\n");
				printArray(arr);
				printf("\t Key: %d\n",key);
			}
		}
		arr[j+1]=key;
	
	
	}
	printf("\nThe Sorted Array is :\n");
	printArray(arr);
}
