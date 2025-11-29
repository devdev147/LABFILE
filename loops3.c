#include <stdio.h>

int main() {
    int i, j, k, num = 1;

    for(i = 1; i <= 3; i++) {
        // print spaces to form isosceles shape
        for(k = 1; k <= 3 - i; k++) {
            printf(" ");
        }

        // print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
