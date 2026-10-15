// Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int n, temp, digit, fact, sum = 0, i;
    int terms, j;
    float series = 1.0;

    // Strong Number
    printf("Enter a number: \n");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("The number is a Strong Number.\n");
    }
    else
    {
        printf("The number is not a Strong Number.\n");
    }

// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


    printf("Enter number of terms: \n");
    scanf("%d", &terms);

    for (j = 2; j <= terms; j++)
    {
        series = series + (float)(2 * j - 1) / (2 * j);
    }

    printf("Sum of the series = %.2f\n", series);

    return 0;
}