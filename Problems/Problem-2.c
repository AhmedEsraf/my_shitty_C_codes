// Write a program to calculate area of area of circle.

#include<stdio.h>

int main() {
    float radius;
    float pi = 3.1416;

    printf("Enter radius: ");
    scanf("%f",&radius);

    printf("Area of Cricle: %2f",pi*radius*radius);
    return 0;

}