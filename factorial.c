//Q11. Write a C program to calculate factorial of a number.
 
#include<stdio.h>
void main()
{
	int x,i,m_d=1;
	
	printf("Enter the Value\n");
	scanf("%d",&x);
	
	for(i=x;i!=0;i--)
	{
	  m_d=m_d*i;	
	}
	 printf(" Multiply  of digit =%d\n",m_d);
	
}

