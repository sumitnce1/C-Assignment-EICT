//Q13. Write a C program to find diameter, circumference and area of circle using functions.

#include<stdio.h>

int dia(int r);
int cir(float r);
int ar(float r);

void main()
{
   int r;
   int d,c,a;
	printf("enter  value\n");
	scanf("%d",&r);
	
	d =dia(r);
	c = cir(r);
	a= ar(r);
	
	printf("diametr of the circle is =%d\n",d); 
	printf("circumference of the circle is =%d\n",c); 
	printf("area of the circle is =%d\n",a); 
		
}

int dia( int r)
{

	return 2*r;
}
int cir( float r)	
	{
	 
		return 2*3.14*r;
	
}
int ar( float r)
	{
	return 3.14*r*r;
	}
