//Q26. Write a Program to get memory address using address of operator with pointer.


#include <stdio.h>

void main()
{
    /* Simple declarations */
    char character = 'C';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

  
    printf("Value of character = %c, Address of character = %u\n", character, &character);
    printf("Value of integer = %d, Address of integer = %u\n", integer, &integer);
    printf("Value of real = %f, Address of real = %u\n", real, &real);
    printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

    
}
