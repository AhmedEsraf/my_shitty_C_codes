// Instructions And Operators

#include<stdio.h> 
#include<math.h>
// Declare variable before using it in C like 
// int a = 5



int main() {
    int a = 2,b= 2; //here a and b are operands
    int sum = a + b; // here + is an operator
    printf("sum is: %d\n",sum);

    int multiply = a*b;
    int x,y = a*b; // here only y equals x*y but x cause it is only declared but not assigned

    // Power Operator
    int p = pow(2,5); // must use #include<math.h> to use
    printf("power : %d\n",p);

    // Modular Operator
    int m = a%b; //vagshesh , only works for integars value 
    printf("Module: %d",m); // also works for negative

    
    return 0;
    





}