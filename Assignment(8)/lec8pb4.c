#include <stdio.h>

void reverseArray(int arr[], int length);

int main() {

    int arr[10];

    printf("Enter elements of the first array:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array 1 before swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, 10);

    printf("\nArray 1 after swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverseArray(int arr[], int length) {
    for(int i = 0; i < length / 2; i++) {
        int temp = arr[i];
		arr[i] = arr[length-i-1];
        arr[length-i-1] = temp;
    }
}
