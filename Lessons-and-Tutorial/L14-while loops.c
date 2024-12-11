#include <stdio.h>

// while loop

int main() {
    int i = 1, n, s = 0;

    // Print numbers from 1 to 5
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    // Print numbers from 0 to n (n given by the user)
    printf("Enter n: ");
    scanf("%d", &n);

    while (s <= n) {
        printf("%d ", s); // Add space between numbers
        s++;
    }

    return 0; // Ensure main returns an integer
}
