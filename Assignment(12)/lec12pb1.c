#include <stdio.h>
int sum(int *arr);
int main()
{
    int arr[6];
	for(int i=0;i<6;i++)
	{
		printf("enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
    printf("the sumation of the array elements %d",sum(arr));
}
int sum(int *arr)
{
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=*(arr+i);
    }
    return sum;
}
