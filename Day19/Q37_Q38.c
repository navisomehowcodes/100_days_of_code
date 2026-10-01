// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main()
{
    int a, b, max, lcm;
    int num, temp, digit, sum = 0;

    // LCM of Two Numbers
    printf("Enter two numbers to find their LCM:\n");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of the two numbers is %d.\n", lcm);

// Write a program to find the sum of digits of a number.


    printf("Enter a number to find the sum of its digits:\n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits is %d.\n", sum);

    return 0;
}