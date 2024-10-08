#include <stdio.h>
int smallest_element(int *arr);
int main()
{
    int arr[6];
	for(int i=0;i<6;i++)
	{
		printf("enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
    printf("the smallest element in array : %d",smallest_element(arr));
}
int smallest_element(int *arr)
{
    int min=*arr;
    for(int i=0;i<6;i++)
    {
        if(min > *(arr+i))
		{
			min=*(arr+i);
		}
    }
    return min;
}
