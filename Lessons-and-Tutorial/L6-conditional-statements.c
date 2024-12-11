#include<stdio.h>
// Conditional Statements

int main() {
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

// if-else

    if (age < 18) { // using curly braces is a good practice 
        printf("You are not an Adult\n");
    }
    else if (age >= 18 && age<= 30)
    {
        printf("You are an Young Adult\n"); }
    else if (age> 30 && age< 51) {
        printf("You are an Adult\n");
    }
    else if (age > 50 && age < 110) {
        printf("You are an Elderly\n");
    }
    else {
        printf("HOW THE HELL ARE YOU STILL ALIVE?!?!\n");
    }

    printf("Thanks you for verifying !\n");

    return 0;
}
