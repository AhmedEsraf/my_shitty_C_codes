// Write a program to calculate permimeter of rectangle , take a & b from user.
#include<stdio.h>

int main() {
     int a, b;
    printf("Enter A: "); 
    scanf("%d", &a); 

    printf("Enter B: "); 
    scanf("%d", &b); 

    printf("Perimeter= %d", 2*(a+b));
    return 0;
}