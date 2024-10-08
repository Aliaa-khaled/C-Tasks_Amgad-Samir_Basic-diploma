#include<stdio.h>
/*(5) Write a program to reverse a number.*/

int main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	printf("the reverse number : ");
    while(num!=0)
	{
		printf("%d",num%10);
		num/=10;
	}
}
