#include <stdio.h>

void swapArrays(int arr1[], int arr2[], int length);

int main() {

    int arr1[10], arr2[10];

    printf("Enter elements of the first array:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Array 1 before swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2 before swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, 10);

    printf("\nArray 1 after swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2 after swap: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

void swapArrays(int arr1[], int arr2[], int length) {
    for(int i = 0; i < length; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
