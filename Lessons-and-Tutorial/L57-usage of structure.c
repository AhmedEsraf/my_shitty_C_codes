// write a program tom store data of 3 students

#include <stdio.h>
#include <string.h>

struct student
{ // structure's stucture
    int roll;
    char name[100];
    float cgpa;
};

int main()
{
    struct student s1, s2, s3;

    s1.roll = 5333;
    s1.cgpa = 3.56;
    strcpy(s1.name, "Ahmed");

    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %.2f\n",s1.cgpa);
    printf("\n");

    s2.roll = 5334;
    s2.cgpa = 3.76;
    strcpy(s2.name, "Esraf");

    printf("Student name: %s\n",s2.name);
    printf("Student roll: %d\n",s2.roll);
    printf("Student cgpa: %.2f\n",s2.cgpa);
    printf("\n");


    s3.roll = 5335;
    s3.cgpa = 3.03;
    strcpy(s3.name, "Leenk");

    printf("Student name: %s\n",s3.name);
    printf("Student roll: %d\n",s3.roll);
    printf("Student cgpa: %.2f\n",s3.cgpa);
    printf("\n");

}
