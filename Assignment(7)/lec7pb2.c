#include<stdio.h>

int main()
{
	int arr[100]={1};
	for(int i=1;i<100;i++)
	{
		arr[i]=arr[i-1]+2;
	}
	printf("the 100th term of the series is : %d",arr[99]);
}