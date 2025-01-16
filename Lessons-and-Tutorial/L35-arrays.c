// Array: collection of similar data types at
// contiguous memory locations

#include <stdio.h>

int main()
{// taking marks of physics , chemistry , math and ict

    // int mark1 = 97, mark2 = 98,
    // mark3 = 99 , mark4 = 100;

    // instead use
    int marks[4] = {97, 98, 99, 100};
    printf("initial array: "); // array can not be printed like python list so we use this

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");


    printf("Change the first number of given array: ");
    
    // taking user input to change value in array
    scanf("%d", &marks[0]); // changed the value of element in 0 index
    
    
    printf("final array: "); // printing the whole array in for loop
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");

    printf("1st index: %d\n", marks[0]); // printing element of array 

    
}
