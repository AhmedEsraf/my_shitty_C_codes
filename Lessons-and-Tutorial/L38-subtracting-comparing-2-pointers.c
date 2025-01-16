//

#include <stdio.h>

int main() {
    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf(" first = %u , second = %u , difference = %u\n",ptr,_ptr, ptr - _ptr);
    // difference = 1 cause it to be 4 bytes of difference between the two pointers  

    _ptr = &age;


    printf("comparison = %u\n", ptr == _ptr);

    // again
    char a = 'a';
    char *__ptr = &a;

      // printf(" first = %u , second = %u , difference = %u\n",ptr,__ptr, ptr - __ptr);
      // THIS LINE won't work because the difference between the two pointers is not the same type


    return 0;
}


