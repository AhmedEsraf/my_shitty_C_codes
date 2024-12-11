// Write a Program to print the average of 3 numbers

#include<stdio.h>

int main() {
    int a,b,c,summ;
    float avg;
    printf("Enter your three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    summ = a + b + c;
    avg = summ/3.0;
    printf("Average: %2f",avg);
    return 0;

}