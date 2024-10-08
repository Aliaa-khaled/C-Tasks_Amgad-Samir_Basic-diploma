#include <stdio.h>

int main()
{
	/*(1) Write a program that takes two integers from the user and print the results of this equation:
	Result = ((num1 + num2) * 3) – 10*/
	int num1,num2;
	int result;
	printf("Enter the number 1 : ");
	scanf("%d",&num1);
	printf("Enter the number 2 : ");
	scanf("%d",&num2);
	result=((num1 + num2) * 3) - 10;
	printf("the result is %d",result);
}