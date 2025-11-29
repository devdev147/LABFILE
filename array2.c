#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of positive numbers: %d", pos);
    printf("\nCount of negative numbers: %d", neg);
    printf("\nCount of even numbers: %d", even);
    printf("\nCount of odd numbers: %d\n", odd);

    return 0;
}
