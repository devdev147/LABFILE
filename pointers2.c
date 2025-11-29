#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("Original addresses:\n");
    printf("ptr1 (int)  = %p\n", ptr1);
    printf("ptr2 (float)= %p\n", ptr2);
    printf("ptr3 (char) = %p\n\n", ptr3);

    printf("After increment and decrement:\n");

    printf("ptr1 + 1 = %p, ptr1 - 1 = %p\n", ptr1 + 1, ptr1 - 1);
    printf("ptr2 + 1 = %p, ptr2 - 1 = %p\n", ptr2 + 1, ptr2 - 1);
    printf("ptr3 + 1 = %p, ptr3 - 1 = %p\n", ptr3 + 1, ptr3 - 1);

    return 0;
}
