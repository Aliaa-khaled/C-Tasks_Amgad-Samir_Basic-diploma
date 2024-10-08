#include <stdio.h>

int main()
{
	/*(4) Write a program that asks the user to enter a three-digit number
	, separates the number into its individual digits and prints the digits separated from one another by three spaces each.
	[Hint: Use combinations of integer division and the remainder operation.] For example, if the user types in 421, the program*/
	int num,result;
	do
	{
	printf("enter a three-digit number : ");
	scanf("%d",&num);
	}
	while(num<100);

	printf("the numbers are : ");	
	int first_digit = num / 100;        
	int second_digit = (num / 10) % 10;       
	int third_digit = num % 10;                
	printf("%d   %d   %d\n", first_digit, second_digit, third_digit);
	num/=10;
}