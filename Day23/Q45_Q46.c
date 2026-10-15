// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main()
{
    int n, i, j;
    float sum = 0.0;

    // Sum of series: 2/3 + 4/7 + 6/11 + 8/15 + ...
    printf("Enter number of terms: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("Sum of the series = %.2f\n", sum);

// Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

    printf("Pattern:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}