#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero");
            } else {
                printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
