#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end, i;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
