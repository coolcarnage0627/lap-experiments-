#include <stdio.h>

int main() {
    int year, day;
    printf("Enter year: ");
    scanf("%d", &year);

    // 01/01/01 is Monday → day 1
    day = (year + (year - 1)/4 - (year - 1)/100 + (year - 1)/400) % 7; // help form youtube for logic 

    switch (day) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}