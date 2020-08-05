//Q15. Write a program to insert element in array.

#include<stdio.h>
#define MAX 100

void main()
{
	int arr[MAX]; 
	int i,size ,num, pos;
	
	printf("Enter size of Array\n");
	scanf("%d",&size);
	
	
	printf("Enter Value in Array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Number to be Insert\n");
	scanf("%d",&num);
	
	printf("Enter Position Where insert number\n");
	scanf("%d",&pos);
	
	if(pos> size+1 || pos<=0)
	{
		printf("Invaild POsition\n");
	}
	
    else
    {
    	for(i=size; i>=pos; i--)
    	{
    		arr[i] = arr[i-1];
		}
		arr[pos-1] = num;
		size++;
		
		printf("Value of that Array\n");
		for(i=0 ;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}
}
