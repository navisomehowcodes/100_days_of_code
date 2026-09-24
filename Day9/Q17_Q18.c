// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    // Calculate discriminant
    d = b * b - 4 * a * c;

    if (d > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    else if (d == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }

    else {
        // Complex roots
        realPart = -b / (2 * a); 
        imaginaryPart = sqrt(-d) / (2 * a);

        printf("Roots are complex.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

float percentage;

    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.");
    }
    else if (percentage >= 90) {
        printf("Grade A");
    }
    else if (percentage >= 80) {
        printf("Grade B");
    }
    else if (percentage >= 70) {
        printf("Grade C");
    }
    else if (percentage >= 60) {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}