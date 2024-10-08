#include<stdio.h>

/*(1) Write a program that reads a positive integer and checks if it is a prime number.*/
int main(){
    int num;
	int prime=0;
	do
	{
	printf("enter a positive number : ");
	scanf("%i",&num);
	}
	while(num<=0);
	for(int i=2;i<=9;i++)
	{
		if((i==num) || (num==0)) continue;
		if(num%i ==0)
		{
			prime=1;
			break;
		}
	}
	if(prime==1)
	{
		printf("it is not a prime number");
	}
	else if(num==0)
	{
		printf("Zero is neither prime nor composite");
	}
	else
	{
		printf("it is a prime number");
	}
	
}