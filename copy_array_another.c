//Q14. Write a program to copy array elements to another array.

#include<stdio.h>
#define MAX 100

void main()
{
	int arr[MAX]; 
	int A[MAX];
	int i,size;
	
	printf("Enter size of Array\n");
	scanf("%d",&size);
	
	
	printf("Enter Value of Array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size; i++)
	{
		A[i]= arr[i];
	}
	
	printf("Value of that Array\n");
	for(i=0; i<size;i++)
	{
		printf("%d ",A[i]);
	}
	
}
