#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4) // breaks the loops
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("End\n");

    // Keep taking numbers as input from user until user enters an
    // odd number
    int n;
    for (int i = 1;; i++)
    {
        printf("enter any even number: ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("NOOOO! You entered an odd number.");
            break;
        }
        printf("You entered %d\n", n);
    }
}