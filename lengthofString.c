//Q17. Program to find length of string using strlen() string function.

#include<stdio.h>
#include<string.h>
void main()
{
	char ch[100];
	int len;
	
	
	printf("Enter 1st String\n");
	gets(ch);
	
    len = strlen(ch);
	
	printf("length of String is\n");
	printf("%d ",len);
	
}
