//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main()
{
    int length, breadth, area, peri;
    printf("Enter length and breadth of rectangle ");
    scanf("%d %d", &length , &breadth);

    area=length*breadth;
    peri=2*(length + breadth);

    printf("Area of the rectangle= %d\n", area);
    printf("Perimeter of the rectangle= %d\n", peri);
    
//Write a program to calculate the area and circumference of a circle given its radius.

    float radius , Area , cir;
    float pi=3.1416;
    printf("Enter the radius of circle");
    scanf("%f", &radius);

    Area=pi*(radius*radius);
    cir=2*pi*radius;

    printf("Area of cicle=%.2f\n",Area);
    printf("Circumference of circle=%.2f\n", cir);

    return 0;


}