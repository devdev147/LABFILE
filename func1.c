#include <stdio.h>

// Recursive factorial function
int factR(int n) {
    if (n == 0)
        return 1;
    else
        return n * factR(n - 1);
}

// Non-recursive factorial function
int factN(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int n, r, ans1, ans2;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Invalid input! r cannot be greater than n.\n");
        return 0;
    }

    ans1 = factR(n) / (factR(r) * factR(n - r));
    ans2 = factN(n) / (factN(r) * factN(n - r));

    printf("\nUsing Recursive Function: nCr = %d", ans1);
    printf("\nUsing Non-Recursive Function: nCr = %d\n", ans2);

    return 0;
}
