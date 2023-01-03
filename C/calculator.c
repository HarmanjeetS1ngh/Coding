#include <stdio.h>
int main()
{
    // Basic calculator
    char operator;
    double num1;
    double num2;
    double result;

    printf("Select the operator to calculate the values: (+ - * /): ");
    scanf("%c", &operator);
    printf("Enter first value: ");
    scanf("%lf", &num1);
    printf("Enter second value: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("%lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf", result);
        break;
    default:
        printf("Invalid operator\n");
        return 0;
    }
    return 0;
}