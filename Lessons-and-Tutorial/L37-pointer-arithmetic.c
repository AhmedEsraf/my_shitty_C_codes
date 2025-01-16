// CASE 1:

// int age = 22;
// int *ptr = &age;
// ptr++;

// here the pointer is integer type so
// ptr++ will increment the pointer by 4 bytes
// because the size of int is 4 bytes

// if ptr was long long type then ptr++ would increment by 8 bytes

#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    printf("initial: %u\n", ptr);

    // Case 1
    ptr++;
    printf("increment: %u\n", ptr); // increased by 4

    ptr--;
    ptr--;
    printf("decrement x2: %u\n", ptr); // decreased by 4 twice
    return 0;
    // same result will appear when using different variable types
    // like long long, float, double,char etc
}

