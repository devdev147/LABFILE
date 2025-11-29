#include <stdio.h>


int number = 10;

void myFunction() {
    int localNumber = 5; 
    printf(" localNumber = %d\n", localNumber);
    printf("number = %d\n", number); 
}

int main() {
    myFunction();
    printf("Outside function, number = %d\n", number);

    return 0;
}
