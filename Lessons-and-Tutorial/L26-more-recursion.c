// Factorial of n 
#include <stdio.h>

int Factorial(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of  %d is: %d\n", n, Factorial(n));
    return 0;
}

int Factorial(int n) {
    if (n == 0) {
        return 1;
    }

   int sum = n * Factorial(n - 1);
   return sum;
}

