//

#include <stdio.h>

int main()
{
    char *canChange = "LOL"; // using pointers we can change the value 
    canChange = "Lmfao";
    printf("%s\n", canChange);

    char canNotChange[] = "LOL";
    // canNotChange[] = "LMFAO"; // this line gives error as normal string array can not be changed

     printf("%s", canNotChange);

}