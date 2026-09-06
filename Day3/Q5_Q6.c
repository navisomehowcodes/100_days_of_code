//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    int cel, fah;
    printf("Enter temperature in celsius");
    scanf("%d", &cel);

    fah=(cel*9/5)+32;

    printf("Temperature in celsius=%d\n", cel);
    printf("Temperature in fahrenheit=%d\n", fah);

//Write a program to swap two numbers using a third variable.

    int a, b, c;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    c=b;
    b=a;
    a=c;
    printf("Before swapping a=%d b=%d\n", b,a);
    printf("After swapping a=%d b=%d\n", a,b);

    
    return 0;

}