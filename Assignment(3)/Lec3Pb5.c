#include <stdio.h>

int main()
{
	/*(5) Write a program to add two floating numbers.
	Determine the integer floor of the sum. The floor is the truncated float value,
	anything after the decimal point is dropped.*/
	float num1,num2,sum;
	int floor_sum;
	printf("Enter the number 1 : ");
	scanf("%f",&num1);
	printf("Enter the number 2	 : ");
	scanf("%f",&num2);
	sum=(num1+num2);
	printf(" the sumation of number 1 and number 2 is: %f\n",sum);
	floor_sum=(int)sum;
	printf("the integer floor of the sumation of number 1 and number 2 is: %d\n",floor_sum);
}
