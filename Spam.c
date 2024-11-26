



#include <stdio.h>

void sum(int a, int b, int c)
{

    int result = a + b;
    printf("Case %d: %d", c, result);
}
int main()
{
    int test;
    printf("Enter Your test Cases: ");
    scanf("%d", &test);

    for (int i = 1; i <= test; i++)
    {
        printf(" Enter a and b:");
        int a, b;
        scanf("%d%d", &a, &b);
        sum(a, b, i);
    }
}