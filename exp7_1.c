// 1. Write a C program that uses functions to perform the following operations:
//a. Reading a complex number.
//b. Writing a complex number.
//c. Addition and subtraction of two complex numbers
#include <stdio.h>
struct complex{
    float real;

    float img;

};
int main() {
    struct complex num1, num2, sum, diff;
    // Reading first complex number
    printf("enter real and imaginary part of first number:");
    scanf("%f%f",&num1.real,&num1.img);
    // Reading second complex number
    printf("enter real and imaginary part of  second number:");
    scanf("%f%f",&num2.real,&num2.img);
    // Writing both complex numbers
    printf("first complex number: ");
    printf("%.2f + %.2fi\n", num1.real, num1.img);
    printf("second complex number: ");
    printf("%.2f + %.2fi\n", num2.real, num2.img);
    // Addition of two complex numbers
    sum.real = num1.real + num2.real;
    sum.img = num1.img + num2.img;
    printf("sum: ");
    printf("%.2f + %.2fi\n", sum.real, sum.img);
    // Subtraction of two complex numbers
    diff.real = num1.real - num2.real;
    diff.img = num1.img - num2.img;
    printf("difference: ");
    printf("%.2f + %.2fi\n", diff.real, diff.img);
    return 0;
}