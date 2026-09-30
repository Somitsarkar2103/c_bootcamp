#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Character: %c\n", ch);
    printf("ASCII value: %d\n", ch);
    printf("Next character: %c\n", ch + 1);

    return 0;
}