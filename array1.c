#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("Second largest number = %d\n", second);

    return 0;
}
