#include<stdio.h>

struct student
{
    int roll;
    float GPA;
    char name[100];
};

// have to declare structure first . then function call

void printInfo(struct student *ptr) {
    printf("Student Info:  \n");
    printf("Student roll: %d \n", ptr->roll);
    printf("Student GPA: %.2f \n", ptr->GPA);
    printf("Student name: %s \n", ptr->name);
}

int main() {
    struct student s1 = {1101, 3.00, "Ahmed"};
    struct student *ptr = &s1;

    printInfo(&s1);

    s1.roll = 114310;
    printInfo(&s1); // call by reference 
    
    return 0;
}
