#include <stdio.h>

// Global variable declaration
int count = 10;

// Function to display the global variable
void displayCount() {
    printf("Count inside displayCount: %d\n", count);
}

// Function to modify the global variable
void modifyCount() {
    count += 5;
    printf("Count inside modifyCount: %d\n", count);
}

int main() {
    printf("Count inside main: %d\n", count);
    
    // Using global variable in another function
    displayCount();
    
    // Modifying global variable
    modifyCount();
    
    // Checking updated value
    printf("Count after modifyCount: %d\n", count);
    
    return 0;
}
