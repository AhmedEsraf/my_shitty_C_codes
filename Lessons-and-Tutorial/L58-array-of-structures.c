// array of structures : 

#include<stdio.h>

struct student
{ // structure's stucture
    int roll;
    char name[100];
    float cgpa;
};

int main() {
    struct student ict[100];


    // information for 0th index student 
    ict[0].roll= 1101;
    ict[0].cgpa = 3.56;
    strcpy(ict[0].name,"Ahmed");

    printf("student name: %s",ict[0].name);
}


