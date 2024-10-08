#include <stdio.h>

int main()
{
	/*(3) Write a program that reads two integers and checks if the first is multiple of the second.*/
	int num1,num2;
	printf("Enter the number 1 : ");
	scanf("%d",&num1);
	printf("Enter the number 1 : ");
	scanf("%d",&num2);
	if(num1==2*num2)
	{
		printf("the first number is multiple of the second number");
	}
	else
	{
		printf("the first number is not multiple of the second number");
	}
}