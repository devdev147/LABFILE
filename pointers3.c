#include <stdio.h>

// Function that accepts pointers and modifies the values
void modifyValues(int *a, int *b) {
    *a = *a + 10;   // add 10 to value of a
    *b = *b * 2;    // multiply value of b by 2
}

int main() {
    int x = 5, y = 8;

    printf("Before modification: x = %d, y = %d\n", x, y);

    modifyValues(&x, &y);  // passing addresses of x and y

    printf("After modification:  x = %d, y = %d\n", x, y);

    return 0;
}
