#include <stdio.h>

// defining structure
typedef struct complex {
    float real;
    float imag;
} complex;

// defining arithmetic operations
complex add (complex num1, complex num2);
complex subtract (complex num1, complex num2);
complex multiply (complex num1, complex num2);

int main() {
    complex num1, num2;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.imag);

    complex add_result = add(num1, num2);
    complex sub_result = subtract(num1, num2);
    complex mul_result = multiply(num1, num2);

    printf("Addition = %.1f + %.1fi", add_result.real, add_result.imag);
    printf("Subtraction = %.1f - %.1fi", sub_result.real, sub_result.imag);
    printf("Multiplication = %.1f * %.1fi", mul_result.real, mul_result.imag);


    return 0;
}

complex add (complex num1, complex num2) {
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}
complex subtract (complex num1, complex num2) {
    complex temp;
    temp.real = num1.real - num2.real;
    temp.imag = num1.imag - num2.imag;
    return (temp);
}
complex multiply (complex num1, complex num2) {
    complex temp;
    temp.real = num1.real * num2.real;
    temp.imag = num1.imag * num2.imag;
    return (temp);
}
