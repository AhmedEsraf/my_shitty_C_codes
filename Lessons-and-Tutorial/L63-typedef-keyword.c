// typedef is used to create alias for data types

#include <stdio.h>

typedef struct cseStudent
{ // format
    int roll;
    float GPA;
    char name[100];
} cse;

int main()
{
    // struct cseStudent s1;
    // or use

    cse s1 = {1101, 3.98, "Ahmed"}; // it can be initialized this way

    printf("student roll: %d", s1.roll);

    
    return 0;
}
