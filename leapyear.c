//Q8. Write a C program to check whether a year is leap year or not.

#include<stdio.h>
void main ()
{
	int x ;
	printf("give the number\n ");
	scanf("%d",&x);
	if(x%400==0 || (x%4==0 && x%100!=0))
	{
		printf("leap year");
	}
	else
        {
		printf("not leap year");
	}
}
