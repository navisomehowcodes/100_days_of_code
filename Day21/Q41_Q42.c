// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, first, last, temp, divisor = 1;
    int swapped;
    int n, i, sum = 0;

    // Swap First and Last Digit
    printf("Enter a number:\n");
    scanf("%d", &num);

    last = num % 10;
    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    swapped = num - first * divisor - last;
    swapped = swapped + last * divisor + first;

    printf("Number after swapping first and last digit is %d.\n", swapped);


// Write a program to check if a number is a perfect number.

    printf("Enter a number to check if it is perfect:\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("The number is a perfect number.\n");
    }
    else
    {
        printf("The number is not a perfect number.\n");
    }

    return 0;
}