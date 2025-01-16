#include<stdio.h>
// (*ptr).code <--->  ptr->code

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {

    struct student s1 = {1101, 3.00, "Ahmed"};
    struct student *ptr = &s1;
    printf("student roll: %d\n", (*ptr).roll);

    printf("student roll: %d \n", ptr->roll); // works the same way 
    printf("student cgpa: %f ",ptr->cgpa);
    return 0;
}
