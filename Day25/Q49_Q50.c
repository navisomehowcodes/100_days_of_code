// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345

#include <stdio.h>

int main()
{
    int i, j;

    // Pattern 1
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *


    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



