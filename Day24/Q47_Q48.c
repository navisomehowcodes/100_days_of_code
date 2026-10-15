// Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main()
{
    int i, j;

    // Pattern 1
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345


    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}