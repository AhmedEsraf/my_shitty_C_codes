// Pointer: a variable that stores the memory address of another variable

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int *ptr = &num; // declaring pointer
    int x = *ptr;  // taking value from a pointer

 // adresss (always use %p adress in hexadecimal  or %u in unsigned integar )
    printf("%p\n", &num);  

    printf("%u\n", &num);

    printf("%u\n", ptr);

    printf("%u\n",&ptr); 

    printf("%p\n",&ptr); 

// value printing 
    printf("num is: %d\n", num); // value of num

    printf("ptr is: %u\n", *ptr); // value of pointer

    printf("%u\n", *(&num)); // value of num 

    printf("x is: %d\n", x); // value of x appointed bt pointer
}