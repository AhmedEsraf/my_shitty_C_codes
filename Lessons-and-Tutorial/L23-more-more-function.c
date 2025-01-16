// // write functions to calculate area of a square,
// a circle and a rectangle

#include <stdio.h>

void areaSquare(int side);
void areaCircle(int radius);
void areaRectangle(int length, int breadth);

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    areaSquare(a);
    areaCircle(a);
    areaRectangle(a, b);
    return 0;
}

void areaSquare(int side)
{
    printf("Area of square: %d \n", side * side);
}

void areaCircle(int radius)
{
    printf("Area of circle: %.2f \n", 3.14 * radius * radius);
}
void areaRectangle(int length, int breadth)
{
    printf("Area of rectangle: %d \n", length * breadth);
}
