#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter the operator: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("The sum of numbers is %d", num1 + num2);
        break;
    case '-':
        printf("The difference is %d", num1 - num2);
        break;
    case '*':
        printf("The product is %d", num1 * num2);
        break;
    case '/':
        printf("The quotient is %.3f", (float)num1 / num2);
        break;
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}