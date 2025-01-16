// it is a way to allocate memory to a data structure during the runtime 

/*
a. malloc() - takes number of bytes to be allocated & returns a pointer of type void 

b. calloc() - 

c. free() - 

d. realloc() -

*/ 

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5* sizeof(int));
   
    return 0;
}
