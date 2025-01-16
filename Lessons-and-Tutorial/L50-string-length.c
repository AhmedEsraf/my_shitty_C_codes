#include <stdio.h>

int countLenth(char arr[])
{
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    printf("Type Your First Name: ");
    scanf("%s", name);

    printf("length= %d", countLenth(name));
}