#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Case 1: No solution if both a and b are 0
    if (a == 0 && b == 0) {
        printf("No solution.\n");
    }
    // Case 2: One root if a = 0 (linear equation bx + c = 0)
    else if (a == 0) {
        root1 = -c / b;
        printf("One root: %.2lf\n", root1);
    }
    // Case 3: No real roots if discriminant is negative
    else {
        discriminant = (b * b) - (4 * a * c);
        if (discriminant < 0) {
            printf("No real roots.\n");
        }
        // Case 4: Two real roots
        else {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots: %.2lf and %.2lf\n", root1, root2);
        }
    }

    return 0;
}
