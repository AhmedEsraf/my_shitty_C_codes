#include <stdio.h>

struct student
{ // structure's stucture
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
    // initializing by giving values
    struct student s1 = {1101, "Ahmed", 3.62};
    struct student s2 = {0}; // means all value are 0
    // this way you dont have to assign value 3 times

printf("1st STUDENT ROLL: %d\n",s1.roll);
printf("2nd Student name: %s\n\n", s2.name); // doesnt print anything as we initialized the value as 0


}