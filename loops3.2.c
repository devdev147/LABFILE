#include <stdio.h>

int main() {
    int i, j, num;

    for(i = 0; i < 5; i++) {  // 5 rows
        // Print leading spaces to center the triangle
        for(j = 0; j < 5 - i; j++) {
            printf("  ");
        }

        num = 1;
        for(j = 0; j <= i; j++) {
            // Adjust spacing manually depending on number size
            if(num < 10)
                printf("   %d", num);   // 3 spaces before single-digit
            else
                printf("  %d", num);    // 2 spaces before double-digit

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

