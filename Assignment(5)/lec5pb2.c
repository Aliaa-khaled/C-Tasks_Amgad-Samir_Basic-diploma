#include<stdio.h>
/*(2) Write a C Function that returns the addition or subtraction or multiplication or division for two numbers.*/
int operation(int num1,int num2,int choice);
int main()
{
	int num1,num2,choice;
	printf("choose the operation\n1.addition \n2.subtraction \n3.multiplication \n4.division\n ");
	printf("your choice : ");
	scanf("%d",&choice);
    printf("enter the number 1: ");
	scanf("%d",&num1);
	printf("enter the number 2: ");
	scanf("%d",&num2);
	int result = operation(num1,num2,choice);
	if(result==-1) 
		printf("Invalid operation");
	else
	{
		printf("the result is : %d",result);
	}
}
int operation(int num1,int num2,int choice)
{
	int result;
	switch(choice)
	{
		case 1: return num1+num2;
		break;
		case 2: return num1-num2;
		break;
		case 3: return num1*num2;
		break;
		case 4: if (num2 != 0) 
				{
					result = num1 / num2;
				}
				else 
				{
					printf("Error: Division by zero!\n");
					return -1;
				}
		break;
		default: return -1;
	}
}