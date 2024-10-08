#include<stdio.h>
/*(6) Write a program to display half pyramid using stars pattern*/

int main(){
	int num;
    printf("enter the number of rows: ");
	scanf("%d",&num);
    for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}