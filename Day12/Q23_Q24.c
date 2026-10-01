// Write a program to calculate library fine based on late days as follows:  
// First 5 days late: ₹2/day  
// Next 5 days late: ₹4/day  
// Next 20 days days late: ₹6/day  
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days;
    float fine;

    printf("Enter number of late days: \n");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs. %.2f\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = Rs. %.2f\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = Rs. %.2f\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }


// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

    int units;
    float bill;

    printf("Enter units consumed: \n");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}