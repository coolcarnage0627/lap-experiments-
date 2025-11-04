#include <stdio.h>

int main() {
    float population = 100000;
    int year;

    printf("Year\tPopulation\n");
    for (year = 1; year <= 10; year++) {
        population = population + (population * 0.10);
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}