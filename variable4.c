#include <stdio.h>

void count() {
    static int count = 0; // static local variable
    count++;              // increases every time the function is called
    printf("count = %d\n", count);
}

int main() {
    count();
    count();
    count();
    return 0;
}
