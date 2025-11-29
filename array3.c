#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    int arr[100];

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("The number %d appears %d times.\n", num, count);

    return 0;
}
