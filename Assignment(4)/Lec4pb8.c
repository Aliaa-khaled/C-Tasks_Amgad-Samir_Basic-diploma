#include<stdio.h>
/*(8) Write a program to display a full pyramid using stars pattern.*/

int main(){
	int num;
    printf("enter the number of rows: ");
	scanf("%d",&num);
    for(int i=1;i<=num;i++)
	{
		for(int k=num-1;k>=i;k--)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}