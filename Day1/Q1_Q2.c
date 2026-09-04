/*Q1: Write a program to input two numbers and display their sum.*/


#include <stdio.h>

int main()
{
    
    int a, b, sum = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);


    /* Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.*/
    int m, n;
    int Sum = 0;
    int diff = 0;
    int prod = 0;
    int quot = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    Sum = m + n;
    diff = m - n;
    prod = m * n;
    quot = m / n;

    printf("Sum = %d\n", Sum);
    printf("Diff = %d\n", diff);
    printf("Product = %d\n", prod);
    printf("Quotient = %d\n", quot);

    return 0;
}