#include <stdio.h>

// for loop example
int main() {
    int n;

    // Prompt the user for the number of repetitions
    printf("How many times? ");
    scanf("%d", &n);

    // For loop to print "Hello World!" n times
    for (int i = 1; i <= n; i++) {
        printf("Hello World! %d\n", i); // Add a newline for better readability
    }

    return 0; // Indicate successful program completion
}
