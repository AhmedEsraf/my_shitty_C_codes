#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4) 
        {
            continue; // skips to next sequence
        }
        printf("%d\n", i);
    }
    printf("End\n");

// Print the factorial of a number n

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int fact = 1;
    for (int i=1; i <=n;i++) {
        fact = fact*i;
    }
    printf("Factorial: %d",fact);
    return 0;
}