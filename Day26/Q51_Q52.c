// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main()
{
    int i, j;

    
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n");


// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

    printf("*\n\n");

    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    printf("\n");

    for (i = 1; i <= 5; i++)
    {
        printf("*\n");
    }

    printf("\n");

    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    return 0;
}