//Q9. Write a C program to enter a number and print its reverse. 

#include<stdio.h>
void main ()
{
	int x,r,s_d=0;
	printf("Enter the Value\n");
	scanf("%d",&x);
	
	
	while(x!=0)
	{
	  r= x%10;
	  s_d=s_d*10+r;
	  x =x/10;	
	}
	 printf(" Sum of digit =%d\n",s_d);
	
}
