//;Q4. Write a C program to find maximum between two numbers using conditional operator.
 
#include<stdio.h>

void main()
{
	int x,y,max;
	printf("enter two value\n");
	scanf("%d%d",&x,&y);
	
	max =(x>y) ? x:y;
	printf("max value =%d\n",max);
}
