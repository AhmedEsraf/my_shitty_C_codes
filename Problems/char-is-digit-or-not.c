// Write a c program to check if given character is a digit or not

#include<stdio.h>

int main() {
    char ch;
    printf("Enter Your Character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("Given Character is a digit\n");
    } else {
        printf("Given Character is not a digit\n");
    }
    return 0;
}






