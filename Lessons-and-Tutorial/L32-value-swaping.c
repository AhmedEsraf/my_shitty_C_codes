// value swapping/interchange

#include <stdio.h>

// using normal way
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("a = %d, b = %d\n", x, y);
}

// using pointer
// call by reference
void _swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf(" a = %d, b = %d\n", *x, *y);
}

int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    // using normal way
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b); // doesn't change value of a and b

    // using pointer
    _swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b); // changes value of a and b

    return 0;
}