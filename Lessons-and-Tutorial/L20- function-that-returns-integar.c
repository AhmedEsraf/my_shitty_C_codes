// make function where it takes two inputs and sums it

#include<stdio.h>

// Function declaration
int summ(int a, int b);

int main() {
    int a, b, sum;

    // Prompt the user for input
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    // Call the summ function with arguments and store the result
    sum = summ(a, b);

    // Print the result
    printf("Sum: %d\n", sum);

    return 0;
}

// Function definition
int summ(int a, int b) {
    return a + b;
}
