#include<stdio.h>

int main()
{
	int arr[]={1,2,3,7,9,4,6,0,3,2};
	int num,index=-1,size;
	printf("enter any element : ");
	scanf("%d",&num);
	size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=size;i++)
	{
		if(num==arr[i])
		{
			index=i;
		}
	}
	printf("the last index of %d is %d",num,index);
}