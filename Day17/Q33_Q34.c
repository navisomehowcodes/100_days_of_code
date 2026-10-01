// Write a program to check if a number is an Armstrong number.
 
#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, remainder, digits = 0;
    int sum = 0, temp;
    int i, isPrime = 1;

    // Armstrong Number
    printf("Enter a number to check Armstrong number:\n");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

// Write a program to check if a number is prime

    printf("Enter a number to check prime number:\n");
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

    return 0;
}