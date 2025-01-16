// sum of first n natural numbers using recursion

#include <stdio.h>

int Sum(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d\n", n, Sum(n));
    return 0;
}

int Sum(int n) {
    if (n == 0) { // we always need one base case
    // or the program will go through stack overflow AND CRASH 
        return 0;
    }

   int sum = n + Sum(n - 1);
   return sum;
}

