// Relational Operators

#include<stdio.h>

int main() {
    // == (equal to), > (greater than), >= (equal or greater)
    //   < , <= , != (not equal to)

    printf("%d\n", 4 == 4); // here output 1 means true
    printf("%d\n", 4 == 43); // here output 0 means false

    // Logical Operator
    // && (AND) , || (OR) , ! (NOT)

    printf("%d\n", 3==3 && 4==3);
    printf("%d", !(3==3 && 4==3)); // here ! changes the output

}

// Heres the Operator Precedence
/*
1. !
2. * , / , %
3. + , -
4. < , <= , > , >=
5. == , !=
6. &&
7. ||
8. = (assignment)

*/