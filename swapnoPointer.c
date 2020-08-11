//Q28. Write a Program to swap two numbers using pointer

#include <stdio.h>


void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

void main()
{
    int num1,num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    
    printf("Before Swapping:\n num1 is: %d,\t num2 is: %d\n",num1,num2);

    
    swap(&num1,&num2);

    
    printf("After  Swapping:\n num1 is: %d,\t num2 is: %d\n",num1,num2);


}
