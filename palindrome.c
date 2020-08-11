//Q10. Write a C program to check whether a number is palindrome or not.
 
# include<stdio.h>
void main()
{
	
	int x,r,s_d=0;
	int num;
	printf("Enter the Value\n");
	scanf("%d",&x);
	
	num = x;
	while(x!=0)
	{
	  r= x%10;
	  s_d=s_d*10+r;
	  x =x/10;	
	}
	if(num==s_d)
    {
	 	printf(" Number is Palindrome\n");
    }
	else
	{
	    printf(" Number is Not Palindrome\n");	
	} 
}

