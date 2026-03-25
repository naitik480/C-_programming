#include <stdio.h>

int main() {
    int a, b;
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);


    int lhs = (a + b) * (a + b);
    int rhs = (a * a) + (2 * a * b) + (b * b);


    printf("LHS (a + b)^2 = %d\n", lhs);
    printf("RHS a^2 + 2ab + b^2 = %d\n", rhs);

    if (lhs == rhs) {
        printf("The expression is proven correct!\n");
    }

    return 0;
}
