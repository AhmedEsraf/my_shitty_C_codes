// Q: Will the output be the same ?

#include <stdio.h>

void printAddress(int n)
{
    printf("Address of n: %p\n", &n);
}
void _printAddress(int *n)
{
    printf("Address of n: %p\n", &n);
}

int main()
{
    int num = 4;

    printf("Address of num: %p\n", &num);
    printAddress(num);   //  creates different n for this function using num therefore different addresses address
    _printAddress(&num); // same num for this function therefore same address
    return 0;
}

// Answer: the output wont be same cause when calling a function it copies
// the variable and value and stores in different address
// but if we call using function using n's address the output will be same