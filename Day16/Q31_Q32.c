// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main()
{
    int num, n, binary[32], i = 0;
    int original, reversed = 0, remainder;

    // Binary Representation
    printf("Enter a number for binary conversion:\n");
    scanf("%d", &num);

    n = num;

    if (n == 0)
    {
        printf("Binary representation: 0\n");
    }
    else
    {
        while (n > 0)
        {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binary representation:\n");

        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }

        printf("\n");
    }

// Write a program to check if a number is a palindrome.

    printf("Enter a number to check palindrome:\n");
    scanf("%d", &num);

    original = num;
    n = num;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}