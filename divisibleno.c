//Q6. Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
void main ()
{	
 int x ;
	printf("give the number\n ");
	scanf("%d",&x);
	if (x%5==0 && x%11==0)
          {	
            printf("divisble by 5 and 11");
	 }
        else 
         {	
            printf("not divisble by 5 and 11");
         }
}
