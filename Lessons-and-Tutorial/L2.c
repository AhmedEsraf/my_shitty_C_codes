#include <stdio.h>

int main() {
    int age; // Declare the variable

    // Input from user
    printf("What is your age: "); // Prompt message
    scanf("%d", &age); // Read input

    // Clear the input buffer
    while (getchar() != '\n');

    // Output
    printf("Your age: %d\n", age);

    // Problem-1: Take two values and calculate their sum
    int a, b;
    printf("Enter A: "); 
    scanf("%d", &a); 

    printf("Enter B: "); 
    scanf("%d", &b); 

    int sum = a + b;
    printf("Sum = %d\n", sum); 
    // or
    printf("again sum is: %d", a +b);

    return 0;
}
