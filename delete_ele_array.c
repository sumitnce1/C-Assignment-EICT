//Q16. Write a program to delete element from array.

#include<stdio.h>
#define MAX 100

void main()
{
	int arr[MAX]; 
	int i,size , pos;
	
	printf("Enter size of Array\n");
	scanf("%d",&size);
	
	
	printf("Enter Value in Array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	printf("Enter Position Where Delete number\n");
	scanf("%d",&pos);
	
	if(pos> size || pos< 0)
	{
		printf("Invaild Position\n");
	}
	
    else
    {                               
    	for(i=pos-1; i<size; i++) 
    	{
    		arr[i] = arr[i+1];
		}
	
		size--;
		
		printf("Value of that Array\n");
		for(i=0 ;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}
}
