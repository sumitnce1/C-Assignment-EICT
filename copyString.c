//Q19. Program to copy string using strcpy() function.

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
	
	strcpy(ch ,ch1);
	
	printf("After Copy a String is\n");
	printf("%s ",ch);
	
}

