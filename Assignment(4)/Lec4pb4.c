#include<stdio.h>
/*(4) Write a program to calculate the power of a number. The number and its power are input from user.*/

int main()
{
	int num,power,result=1;
	printf("enter the number and its power: ");
	scanf("%d",&num);
	scanf("%d",&power);
    for(int i=1;i<=power;i++)
	{
		result*=num;
	}
	printf("%d power %d is %d",num,power,result);
}
