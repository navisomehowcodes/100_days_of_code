// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    long long product = 1;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for(i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

// Write a program to print the product of even numbers from 1 to n.

    for(i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}