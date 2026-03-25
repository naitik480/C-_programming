#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int asciiValue = (int)ch;

    printf("The character is: %c\n", ch);
    printf("Its ASCII value is: %d\n", asciiValue);

    return 0;
}
