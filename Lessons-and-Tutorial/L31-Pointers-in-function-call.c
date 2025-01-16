// 2 ways:
// 1. Call by value ,
// 2. Call by reference

#include <stdio.h>

// call by value
void square(int n)
{
    n = n * n;
    printf("square: %d\n", n);
}

// call by reference
void _square(int *n) // variable address
{
    *n = (*n) * (*n);
    printf("square: %d\n", *n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // call by value
    square(num);
    printf("number: %d\n", num); // didn't change the value of num

    // call by reference
    _square(&num);
    printf("number: %d\n", num); // changed the value of num

    return 0;
}