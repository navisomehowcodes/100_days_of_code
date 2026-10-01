// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int num, temp, digit, product = 1, found = 0;
    long long binary, complement = 0, place = 1;
    int bit;

    // Product of Odd Digits
    printf("Enter a number:\n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
            found = 1;
        }

        temp = temp / 10;
    }

    if (found == 1)
    {
        printf("Product of odd digits is %d.\n", product);
    }
    else
    {
        printf("There are no odd digits.\n");
    }

// Write a program to find the 1’s complement of a binary number and print it.


    printf("Enter a binary number:\n");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        bit = binary % 10;

        if (bit == 0)
            bit = 1;
        else
            bit = 0;

        complement = complement + bit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement is %lld.\n", complement);

    return 0;
}