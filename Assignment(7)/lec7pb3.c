#include<stdio.h>

int main()
{
	int arr[10]={1};
	for(int i=1;i<10;i++)
	{
		arr[i]=arr[i-1]*3;
	}
	printf("the 100th term of the series is : %d",arr[9]);
}