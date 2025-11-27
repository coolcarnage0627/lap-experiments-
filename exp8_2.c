 //Perform pointer arithmetic (increment and decrement) on pointers of different
//data types. Observe how the memory addresses change and the effects on
// data access
#include <stdio.h>
int main() {
    int intVar = 10;
    float floatVar = 20.5;
    char charVar = 'A';

    int *pInt = &intVar;
    float *pFloat = &floatVar;
    char *pChar = &charVar;

    printf("Initial Addresses:\n");
    printf("pInt: %d, pFloat: %f, pChar: %c\n", *pInt, *pFloat, *pChar);

    // Incrementing pointers
    pInt++;
    pFloat++;
    pChar++;

    printf("\nAddresses after Incrementing:\n");
    printf("pInt: %d, pFloat: %f, pChar: %c\n", *pInt, *pFloat, *pChar);

    // Decrementing pointers
    pInt--;
    pFloat--;
    pChar--;

    printf("\nAddresses after Decrementing:\n");
    printf("pInt: %d, pFloat: %f, pChar: %c\n", *pInt, *pFloat, *pChar);

    return 0;
}