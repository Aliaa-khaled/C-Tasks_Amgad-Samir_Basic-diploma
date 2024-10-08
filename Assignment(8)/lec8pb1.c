#include<stdio.h>

int total(int arr[],int size);

int main() {
    
	int array[10]={1,2,3,4,5,6,7,8,9,1};
    printf("The sumation is: %d\n", total(array ,10));
    return 0;
}

int total(int arr[],int size)
{
    int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}