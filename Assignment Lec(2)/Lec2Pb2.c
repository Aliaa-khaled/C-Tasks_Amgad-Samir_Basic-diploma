#include <stdio.h>

int main()
{
	/*(2) Write a program that takes a number and a bit number from the user, toggle the required bit, then print the new value.*/
	int num,bit_number;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter the bit number : ");
	scanf("%d",&bit_number);
	num=num^(1<<bit_number);
	printf("the number is : %d",num);
}