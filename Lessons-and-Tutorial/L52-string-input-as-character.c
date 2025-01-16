#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n') // loop breaks when enter is pressed
    {
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    
    str[i] = '\0';
    printf("%s", str);
}