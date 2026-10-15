// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n, i, j, count;

    // Prime numbers from 1 to n
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {
        count = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }
    }

    printf("\n");


// Read and print elements of a one-dimensional array.

    int size, a[100];

    printf("Enter the size of array: \n");
    scanf("%d", &size);

    printf("Enter array elements: \n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}