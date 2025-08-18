#include <stdio.h>

double calculator(char, double, double);

int main() {
    char operator;
    double a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    result = calculator(operator, a, b);

    printf("Result: %.2lf\n", result);

    return 0;
}

double calculator(char operator, double a, double b) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                printf("Error: Division by zero\n");
                return 0;
            }
        default:
            printf("Invalid operator\n");
            return 0;
    }
}
