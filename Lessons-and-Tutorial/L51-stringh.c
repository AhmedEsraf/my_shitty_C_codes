#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Type Your First name: ");
    scanf("%s", name);
    // strlen()
    printf("length = %d\n", strlen(name)); // built in length function

    // strcpy(newStr,oldStr) : copies string
    char againname[100];
    strcpy(againname, name);
    printf("new string: %s\n", againname);

    // strcat(firstStr,secStr) pluses two string
    // concatenation
    // works only if firstStr is equal or bigger than second string
    // for example here hi[100] and you[100] are both 100
    char hi[100] = "Hello";
    char you[100] = "World";
    strcat(hi, you); // doesnt add space
    printf("concatination: %s\n",hi); // concates in first string // also needs space in string


    // strcmp(firstSTr,secondStr) : compares 2 strings and returns a value
    char A[] = "Apple";
    char B[] = "Banana";
    printf("%d\n",strcmp(A,B)); // returns -1 
    printf("%d\n",strcmp(B,A)); // returns 1
}