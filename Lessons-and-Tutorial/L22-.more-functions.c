// function can only return one value at a time
// changes to parameters in function dont change the values in calling function.

#include<stdio.h>

void calculatePrice(float price);

int main() { 
    float p;
    scanf("%f",&p);
    calculatePrice(p);
    return 0;

}


void calculatePrice(float price){
    price = price + (0.18*price);
    printf("Final price is: %f",price);
}

