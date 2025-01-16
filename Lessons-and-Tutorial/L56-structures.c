// structures : a collection of values of different data types

// For example: for a student store the following: name(string) , roll no(int) , cgpa(float)

#include<stdio.h>
#include<string.h>


struct  student { // structure's stucture
    int roll;
    char name[100];
    float cgpa;
};

int main() {
    struct student s1;
    s1.roll = 5333;
    s1.cgpa = 3.56;
    // s1.name = "Ahmed"; // this can not happen as declared string array values can not be changed
    strcpy(s1.name,"Ahmed"); // we have to use this library function

    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %.2f\n",s1.cgpa);
}