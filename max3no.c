//Q5. Write a C program to find maximum between three numbers using conditional operator.

#include<stdio.h>

void main()
{
	int x,y,z,max;
	printf("enter three value\n");
	scanf("%d%d%d",&x,&y,&z);
	
	max = x>y ? (x>z ? x:z) : (y>z ? y:z) ;
	printf("max value =%d\n",max);
}
