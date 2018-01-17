#include<stdio.h>
#include<stdlib.h>

int arr1[10]={0};
int n=0;
//function Declaration
void selectionSort(int []);
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
	selectionSort(arr1);
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

void selectionSort(int arr2[10])
{
	int temp=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			if(arr2[i] > arr2[j])
			{
				temp=arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
		
		if(i<n-2)
		 	printf("\nThe Partly Sorted Array is :\n");
		else
			printf("\nThe Sorted Array is :\n");
		printArray(arr2);
	}
}
