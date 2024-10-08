#include<stdio.h>

/*(2) Write a program that reads a positive integer and checks if it is a perfect square.*/
int main(){
    int num;
	int square=0;
	do
	{
	printf("enter a positive number : ");
	scanf("%i",&num);
	}
	while(num<=0);
	
	for(int i=1;i*i<=num;i++)
	{
		if((num/i)==i)
		{
			square=1;
			break;
		}

	}
	if(square==1)
	{
		printf("it is a perfect square number");
	}
	else
	{
		printf("it is not a perfect square number");
	}

}
