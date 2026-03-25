#include <stdio.h>

int main() {
    int myInt = 15;
    float myFloat = 4.5;


    float result = myInt + myFloat;

    printf("Integer value: %d\n", myInt);
    printf("Float value: %.2f\n", myFloat);
    printf("Result of addition (Implicitly cast to float): %.2f\n", result);

    return 0;
}
