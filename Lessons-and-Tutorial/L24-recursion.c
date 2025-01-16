// Recursion: when a function calls its own function

#include <stdio.h>

void printHelloWorld(int count);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printHelloWorld(n);
    return 0;
}

// Recursive function to print Hello, World! n times
void printHelloWorld(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello, World! \n");
    printHelloWorld(count - 1);
}
