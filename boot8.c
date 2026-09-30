#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter first and second number: ");
    scanf("%d%d", &a, &b);
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\nEnter your choice: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '1':
            printf("Sum = %d", a + b);
            break;
        case '2':
            printf("Subtraction = %d", a - b);
            break;
        case '3':
            printf("Multiplication = %d", a * b);
            break;
        case '4':
            printf("Division = %.2f", (float)a / b);
            break;
        case '5':
            printf("Modulus = %d", a % b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}