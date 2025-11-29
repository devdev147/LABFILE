#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("Values of variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    printf("Values using pointers:\n");
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %.2f\n", *ptr2);
    printf("*ptr3 = %c\n\n", *ptr3);

    printf("Addresses stored in pointers:\n");
    printf("ptr1 = %p\n", ptr1);
    printf("ptr2 = %p\n", ptr2);
    printf("ptr3 = %p\n", ptr3);

    return 0;
}
