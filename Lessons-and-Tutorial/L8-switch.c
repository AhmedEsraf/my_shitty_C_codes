#include<stdio.h>

// Switch 

int main() {
    int day; // 1 = mon ,2 = tues and so on
    printf("Enter day(1-7): ");
    scanf("%d", &day);
    
    switch (day)

    // cases can be in any order
    // Nested Switch (switch inside switch) are allowed
    
    {
    case 1 : printf("Monday");
        break;
    case 2 : printf("Tuesday");
        break;
    case 3 : printf("Wednesday");
        break;
    case 4 : printf("Thursday");
        break;
    case 5 : printf("Friday");
        break;
    case 6 : printf("Saturday");
        break;
    case 7 : printf("Sunday");
        break;

    default: printf("Not a Valid Day"); 
        break;
    }




}