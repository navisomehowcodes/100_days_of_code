// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: \n");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): \n");
    scanf(" %c", &op);

    printf("Enter second number: \n");
    scanf("%d", &b);

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulo by zero is not possible.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }
    

    int n, i;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}