#include <stdio.h>

int main() {
    float num, result;

    printf("Enter the number : ");
    scanf("%f", &num);

    for (int i = 0; i < 10; i++) {
        if (num < 3) break;
        result = num / 3.0;
        num /= 3.0;
    }

    if (result != 1) {
        printf("The number is not a power of 3\n");
    } else {
        printf("The number is a power of 3\n");
    }

    return 0;
}
