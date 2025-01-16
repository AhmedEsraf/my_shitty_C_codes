// Write a function to count the occurrences of vowels in a string

#include <stdio.h>

void countVowel(char arr[])
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
        {
            count++;
        }
    }
    printf("Vowel Count:%d",count);
}

int main()
{
    char str[100];
    printf("Enter Your Word: ");
    scanf("%s",str);

    countVowel(str);
}