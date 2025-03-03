#include<stdio.h>

int main() {
    int i, x, n;
    double ans = 1.0;  // Use double for accuracy in negative exponents

    printf("Enter the value of base: ");
    scanf("%d", &x);
    printf("Enter the value of power: ");
    scanf("%d", &n);

    // Handle 0^0 case explicitly
    if (x == 0 && n == 0) {
        printf("0^0 is undefined.\n");
        return 1;
    }

    // Handle cases where base is 0
    if (x == 0) {
        printf("%d^%d = 0\n", x, n);
        return 0;
    }

    // Compute power for positive and negative exponents
    if (n < 0) {
        for (i = 1; i <= -n; i++) {
            ans *= x;
        }
        ans = 1.0 / ans;  // Convert for negative exponents
    } else {
        for (i = 1; i <= n; i++) {
            ans *= x;
        }
    }

    // Print final result
    printf("%d^%d = %.6lf\n", x, n, ans);

    return 0;
}
