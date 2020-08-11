//Q3. Write a program to convert temperature from Celcius to Farenheit.

#include<stdio.h>
 
void main() 
{
 float celsius, fahrenheit;
 
 printf("\nEnter temp in Celsius : ");
 scanf("%f", &celsius);
 
 fahrenheit = (1.8 * celsius) + 32;
 printf("\nTemperature in Fahrenheit : %f ", fahrenheit);
 
}
