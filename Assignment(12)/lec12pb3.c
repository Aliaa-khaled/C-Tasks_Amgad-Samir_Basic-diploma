#include <stdio.h>
int reverse(int *arr);
int main()
{
    int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter the element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	reverse(arr);
	for(i=0;i<10;i++)
	{
		printf("the element %d : %d\n",i+1,arr[i]);
	}
}
int reverse(int *arr)
{
    for(int i=0;i<5;i++)
    {
        int temp=*(arr+9-i);
        *(arr+9-i)=*(arr+i);
        *(arr+i)=temp;
    }
}
