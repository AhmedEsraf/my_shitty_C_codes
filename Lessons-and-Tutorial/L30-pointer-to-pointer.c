// pointer to pointer: a variable that stores 
// the memory address of another pointer

#include <stdio.h>

int main() {
    float price = 100.0; // assigning value to variable
    float *ptr = &price; // assigning variable address to pointer
    float **pptr = &ptr; // assigning pointer address to pointer to pptr with **



// Question: print the value of price from its pointer to pointer
    printf("%f\n",**pptr); 
}