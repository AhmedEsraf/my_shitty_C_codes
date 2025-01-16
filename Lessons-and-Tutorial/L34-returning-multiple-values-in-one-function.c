// Question: Write a fuction to calculate sum,product and average
// of two numbers, print that in main function

#include <stdio.h>


// passing by reference
void doWork(int a, int b, int *sum, int *product, float *average)
{
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2.0;
}

int main()
{
    int a = 10, b = 20;
    int sum, product;
    float average;

    doWork(a, b, &sum, &product, &average);
    // stored the 3 values in the main function variables

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}