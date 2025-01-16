// adding pointers to our structures

#include <stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1101, 3.00, "Ahmed"};
    printf("student roll: %d\n", s1.roll);

    // USING POINTER TO PRINT VALUE
    struct student *ptr = &s1;
    printf("student roll: %d", (*ptr).roll); // use parentheses in pointer 
    
}