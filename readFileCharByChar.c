//Q24. Write a Program to read a file character by character.

#include<stdio.h>

void main()
{
	FILE *ptr;
	char path[50];
	
	int c=0 , w=0, l=0;
	char ch;
	
	printf("Enter File Path\n");
	scanf("%s",path);
	
	ptr = fopen(path, "r"); 
	
	while((ch = fgetc(ptr))!=EOF)
	{
		c++;  // char count
		
		if(ch=='\n')
		{
			l++;
			}	
			
			if(ch==' ' || ch=='\t')
			{
				w++;
			}
	}
	
	printf("Total Char. in File : %d\n",c);
	printf("Total word in File : %d\n",w);
	printf("Total line in File : %d\n",l);
}
