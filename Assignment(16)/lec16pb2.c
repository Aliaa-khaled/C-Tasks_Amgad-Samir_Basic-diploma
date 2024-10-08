#include <stdio.h>

// Define a structure for a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    // Declare two complex numbers and the result
    struct Complex num1, num2, sum;

    // Input for the first complex number
    printf("Enter real and imaginary part of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for the second complex number
    printf("Enter real and imaginary part of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Call the function to add complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    printf("\nSum of complex numbers: %f + %fi\n", sum.real, sum.imag);

    return 0;
}
