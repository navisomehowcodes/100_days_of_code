//Q7 Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Before swapping a=%d b=%d\n", b, a);
    printf("After swapping a=%d b=%d\n", a, b);

  

// Q8 Write a program to find and display the sum of the first n natural numbers.

    int n, sum;
    printf("Enter n");
    scanf("%d", &n);

    sum=n*(n+1)/2;

    printf("Sum of first %d natural numbers= %d", n, sum );


    return 0;
}