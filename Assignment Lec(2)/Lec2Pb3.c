#include <stdio.h>

int main()
{
	/*(3) Write a program that takes a number and a bit number from the user, then print the value of this bit in this number*/
	int num,bit_number,value;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter the bit number : ");
	scanf("%d",&bit_number);
	int Value = (num >> bit_number) & 1;
	printf("the Value is : %d",Value);
}