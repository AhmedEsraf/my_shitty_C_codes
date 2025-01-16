// write fibonacci sequence n times using recursion

#include <stdio.h>

int fib(int n)
{
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
    int fibN = fib(n - 1) + fib(n - 2);

    return fibN;
}

void printFibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series for n terms: ");
    printFibonacci(n);

    return 0;
}