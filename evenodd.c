//Q7. Write a C program to check whether a number is even or odd.

#include<stdio.h>
void main ()
{
	int x ;
	printf("give the number\n ");
	scanf("%d",&x);
	if(x%2==0)
	{
	printf("the number is even");
	}
	else
        {
		printf("the number is odd");
        }
}

