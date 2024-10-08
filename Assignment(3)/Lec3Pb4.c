#include <stdio.h>

int main()
{
	/*(4) Write a program that calculates the required heater activation time according to the input temperature of water.*/
	int temp,heater;
	printf("Enter the temperature of water : ");
	scanf("%d",&temp);
	if(temp>=0 && temp<=30)
	{
		heater= 7;
		printf("required heating time = %d mins.",heater);
	}
	else if(temp>=30 && temp<=60)
	{
		heater= 5;
		printf("required heating time = %d mins.",heater);
	}
	else if(temp>=60 && temp<=90)
	{
		heater= 3;
		printf("required heating time = %d mins.",heater);
	}
	else if(temp>=90 )
	{
		heater= 1;
		printf("required heating time = %d mins.",heater);
	}
	else 
	{
		printf("invalid temperature");
	}
}