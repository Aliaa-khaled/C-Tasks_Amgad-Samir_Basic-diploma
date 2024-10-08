#include <stdio.h>

int main()
{
	/*(2) Write program that converts any letter from lowercase to uppercase.*/
	char character;
	do{
	printf("Enter the lowercase character : ");
	scanf(" %C",&character);
	}
	while((character<='a')||(character>='z'));
	character-=32;
	printf("the uppercase character is %c",character);
	
}