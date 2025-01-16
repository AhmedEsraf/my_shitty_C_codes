// salting: adds additional values to a password
// generally done by companies to prevent hacking
// example: pass = "test123"
// salt = "abc"
// final pass registered: "testabc123"

// Question: find the salted form of a password entered by user
// if salt is "123" & added at the end

// now do the same thing except at index 2 of password

#include <stdio.h>

void saltedPassword(char arr[])
{
    char salt[] = "123";
    
    strcat(arr, salt);
}

void anotherSaltedPassword(char arr[])
{
    char salt[] = "123";
    char temp[200];

    strncpy(temp, arr, 2);
    temp[2] = '\0';

    strcat(temp, salt);
    strcat(temp, arr + 2);

    strcpy(arr, temp);
}

int main()
{
    char password[100];
    char og[100];

    printf("Enter Password: ");
    scanf("%s", password);
    strcpy(og, password);

    saltedPassword(password);
    printf("Salted Password: %s\n", password);

    strcpy(password, og);

    anotherSaltedPassword(password);
    printf("Another Salted Password: %s\n", password);
}