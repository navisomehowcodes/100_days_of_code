// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, num, rem, reverse = 0, i;
    long long factorial = 1;

    // Factorial
    printf("Enter a number to find factorial: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

// Write a program to reverse a given number. 

    printf("Enter a number to reverse: \n");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}