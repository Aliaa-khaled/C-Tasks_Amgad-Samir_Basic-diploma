#include <stdio.h>

int main()
{
	/*(3) Write a program for converting temperature from degrees Celsius to degrees Fahrenheit, given the formula:
	F = C x 9/5 + 32*/
	float temp_f,temp_c ;
	printf("Enter the temperature in degrees Celsius : ");
	scanf("%f",&temp_c);
	temp_f = temp_c * 9.0/5.0 + 32.0;
	printf("the temperature in degrees Fahrenheit is %f",temp_f);
}