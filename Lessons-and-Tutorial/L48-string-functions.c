// get(str) input a string (even multi word)
// puts(str) output a string
// fgets(str,n,file) stops when n-1 chars input or new line is entered

#include<stdio.h>

int main() {
    char str[100];
    gets(str); //input
    puts(str); //output

    fgets(str,100,stdin);

}