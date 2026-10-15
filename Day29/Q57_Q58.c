// Find the sum of array elements.

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, max, min;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sum of array elements
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d\n", sum);

// Find the maximum and minimum element in an array.

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}