#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;//without using 3rd variable
    a = a - b;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}