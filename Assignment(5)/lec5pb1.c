#include<stdio.h>
/*(1) Write a C Function that prints the cube of any number*/
int cube(int number);
int main()
{
	int num;
    printf("enter any number: ");
	scanf("%d",&num);
	int result=cube(num);
	printf("the cube of %d : %d",num,result);
   
}
int cube(int number)
{
	return number*number*number;
}