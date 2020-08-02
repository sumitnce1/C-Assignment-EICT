//Q12. Write a C program to find cube of any number using function. 

#include<stdio.h>

int show(int num);

void main()
{
	int i, res;
	printf("enter any value\n");
	scanf("%d",&i);
	
	res = show(i);
	
	printf("cube is=%d",res);
}

int show(int num)
{
	
    return num*num*num;
}
