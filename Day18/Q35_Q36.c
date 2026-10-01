// Write a program to check if a number is prime 

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;
    int a, b, x, y, remainder;

    // Prime Number Check
    printf("Enter a number to check if it is prime:\n");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }


// Write a program to find the HCF (GCD) of two numbers.

    printf("Enter two numbers to find their HCF:\n");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    printf("HCF of the two numbers is %d.\n", x);

    return 0;
}