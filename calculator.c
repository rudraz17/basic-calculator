#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("=== Basic Calculator ===\n");
    printf("Enter an operation : ");
    
    // Read user input
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // Perform the operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
