#include<stdio.h>
// do while loop


int main() {
    int i = 1;

    // Print numbers from 1 to 5 using do-while loop
    printf("Numbers from 1 to 5:\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    // Calculate sum of first n natural numbers and print them in reverse
    int n, s = 0, j = 1;

    printf("Enter a positive number (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1; // Exit the program if input is invalid
    }

    while (j <= n) {
        s = s + j;
        j++;
    }
    printf("Sum of the first %d natural numbers: %d\n", n, s);

    printf("Numbers from %d to 1 in reverse order:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
