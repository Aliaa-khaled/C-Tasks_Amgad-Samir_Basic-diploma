#include <stdio.h>

int main()
{
	/*(1) Write a program that takes one character and checks if it alphabet or not.*/
	char character;
	printf("Enter the any character : ");
	scanf("%C",&character);
	if((character>='A')&&(character<='Z'))
	{
		printf("character is an alphabet");
	}
	else
	{
		printf("character is not an alphabet");
	}
}