#include <stdio.h>

int main() {
    float myFloat = 9.85;


    int myInt = (int)myFloat;

    printf("Original float value: %.2f\n", myFloat);
    printf("Explicitly cast integer value: %d\n", myInt);

    return 0;
}
