// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if a valid triangle can be formed
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid Triangle");
    }
    else if (a == b && b == c) {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }

// Write a program to display the day of the week based on a number (1–7) using switch-case.
    int day;

    printf("\nEnter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }


    return 0;
}