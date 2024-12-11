#include <stdio.h>
// Lession-01: Variables ,   Data Types , Print

int main() {
    // Variable declarations and assignments
    printf("Hello World\n");

    int number = 25; // Capitalization effects the names and acts as two different variables
    int Number = 0;

    char star = '*'; // Use single quotes for a char
    float pi = 3.14;

    int _age = 30;
    int final_price = 1000; // only use underscore as space in variables

    // Printing all the variables
    printf("number: %d\n", number);
    printf("Number: %d\n", Number);
    printf("star: %c\n", star);
    printf("pi: %.2f\n", pi); // Prints float to two decimal places
    printf("_age: %d\n", _age);
    printf("final_price: %d\n", final_price);


    // Data Types
    int age = 22; // integar value
    float pi = 3.1416; // float value
    char hashtag ='#'; // Character Value  



    return 0;

// using Double Slash you can write a comment 
/*
 You can also write multple line codes this way /*.
comments doesnt execute as programs so it doesnt show any output
 */

// use \n to print to the next line 

 
}

