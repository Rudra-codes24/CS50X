#include <stdio.h>

int main(void)
{
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c skips leftover whitespace/newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: division by zero.\n");
            }
            else
            {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: invalid operator '%c'.\n", op);
    }

    return 0;
}