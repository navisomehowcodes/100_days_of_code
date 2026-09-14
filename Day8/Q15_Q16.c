// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet");

    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet");

    else if (ch >= '0' && ch <= '9')
        printf("Digit");

    else
        printf("Special Character");


//Write a program to input three numbers and find the largest among them using if–else.

    int a, b, c;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the largest", a);

    else if (b >= a && b >= c)
        printf("%d is the largest", b);

    else
        printf("%d is the largest", c);

        return 0;
}