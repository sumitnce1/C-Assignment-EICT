//Q18. Program to concatenate two strings using strcat() function.

#include<stdio.h>
#include<string.h>
void main()
{
	char ch[10];
	char ch1[10];
	
	printf("Enter 1st String\n");
	gets(ch);
	
	printf("Enter 2nd String\n");
	gets(ch1);
	
	strcat(ch ,ch1);
	
	printf("After Concate a String is\n");
	printf("%s ",ch);
	
}
