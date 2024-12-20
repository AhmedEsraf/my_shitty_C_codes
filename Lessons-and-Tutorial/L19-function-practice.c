// Write a function that prints salam if user is muslim else adab

#include <stdio.h>

void greetmuslim();
void greetnonmuslim();

int main()
{
    printf("Are you Muslim? type y or n: ");
    char ch;
    scanf("%c", &ch);
    if (ch == 'y')
    {
        greetmuslim();
    }
    else if (ch == 'n')
    {
        greetnonmuslim();
    }
    else
    {
        printf("invalid");
    }
    return 0;
}

void greetmuslim()
{
    printf("Assalamu Alaikum");
}

void greetnonmuslim()
{
    printf("Adab");
}
