#include <stdio.h>
int swap(int *arr1,int *arr2);
int main()
{
    int arr1[6],arr2[6],i;

	printf("enter the elements of the first array\n");
	for(i=0;i<6;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&arr1[i]);
	}

	printf("enter the elements of the second array\n");
	for(i=0;i<6;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&arr2[i]);
	}

	swap(arr1,arr2);

	printf("the elements of the first array\n");
    for(i=0;i<6;i++)
	{
		printf("the element %d : %d\n",i+1,arr1[i]);
	}

	printf("the elements of the second array\n");
    for(i=0;i<6;i++)
	{
		printf("the element %d : %d\n",i+1,arr2[i]);
	}
}
int swap(int *arr1,int *arr2)
{
    for(int i=0;i<6;i++)
    {
        int temp=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
    }
}
