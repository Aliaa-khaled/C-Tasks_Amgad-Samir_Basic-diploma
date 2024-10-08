#include <stdio.h>

float pi =3.14;
int main()
{
	/*(4) Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.*/
	int radius;
	float area , circumference ;
	printf("Enter the radius : ");
	scanf("%d",&radius);
	circumference= 2 * pi * radius;
	area= pi * radius * radius;
	printf("the area is %0.3f\n",area);
	printf("the circumference is %0.3f",circumference);
}