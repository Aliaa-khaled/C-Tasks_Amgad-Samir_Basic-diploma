#include <stdio.h>
int copy(int *arr1,int *arr2);
int main()
{
    int arr1[6],arr2[6],i;

	printf("enter the elements of the first array\n");
	for(i=0;i<6;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&arr1[i]);
	}

	copy(arr1,arr2);
	printf("the elements of the second array\n");
    for(i=0;i<6;i++)
	{
		printf("the element %d : %d\n",i+1,arr2[i]);
	}
}
int copy(int *arr1,int *arr2)
{
    for(int i=0;i<6;i++)
    {
        *(arr2+i)= *(arr1+i);
    }
}
