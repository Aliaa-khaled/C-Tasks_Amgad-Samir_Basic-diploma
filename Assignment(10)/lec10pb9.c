#include <stdio.h>
void insertionSort(int arr[], int n);

int main() {
    int arr[10];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, 10);

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
