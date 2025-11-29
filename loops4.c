#include <stdio.h>

int main() {
    int population = 100000;   // initial population
    int year;

    printf("Year\tPopulation\n");
    printf("-------------------\n");

    for(year = 1; year <= 10; year++) {
        population = population + (population * 10 / 100); // 10% increase using int
        printf("%d\t%d\n", year, population);
    }

    return 0;
}
