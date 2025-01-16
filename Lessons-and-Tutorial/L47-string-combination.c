// create a string first & lastName to
// to store details of user & print all the characters using a loop.

#include <stdio.h>

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) // here '\0' null pointer is important as all string arrays have them at the last adresss
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main()
{
    char firstName[] = "Ahmed";
    char lastName[] = "Esraf";

    printString(firstName);
    printString(lastName);

    // or
    printf("%s %s", firstName, lastName); // here %s is string format specifier
    printf("\n");
    // again
    printf("Enter different first name: ");
    scanf("%s", firstName);
    printf("%s %s", firstName, lastName);
}