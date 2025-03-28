#include <stdio.h>

void main() {
    char operator;
    double num1, num2, result;

    // User input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Calculation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return;
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            return;
    }

    // Output result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
}
