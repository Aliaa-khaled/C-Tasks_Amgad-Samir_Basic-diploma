#include <stdio.h>
void bubbleSort(int arr[], int n);

int main() {
    int arr[10];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 10);

    printf("Sorted array in descending order: ");
    for (int i = 0; i < 10; i++)
	{
        printf("%d ", arr[i]);
    }
}
void bubbleSort(int arr[], int n)
{
    int i, j, temp,flag=0;
    for (i = 0; i < n-1; i++)
	{
        for (j = 0; j < n-i-1; j++)
		{
            if (arr[j] < arr[j+1])
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
				flag=1;
            }
        }
		if(!flag) break;
    }
}
