// . Declare different types of pointers (int, float, char) and initialize them with the
// addresses of variables. Print the values of both the pointers and the variables
// they point to.
#include <stdio.h>

int main() {
    int num = 10;
    float fnum = 20.5;
    char ch = 'A';

    int *pInt = &num;
    float *pFloat = &fnum;
    char *pChar = &ch;

    printf("Value of num: %d, Value pointed by pInt: %d\n", num, *pInt);
    printf("Value of fnum: %.2f, Value pointed by pFloat: %.2f\n", fnum, *pFloat);
    printf("Value of ch: %c, Value pointed by pChar: %c\n", ch, *pChar);

    return 0;
}
