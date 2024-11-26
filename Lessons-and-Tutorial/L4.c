#include<stdio.h> 


//Type Conversion


/*
int operation int = int
int op float = float
float op float = float
*/


int main() {
    printf("%f \n",3.0*5.5);


int a = (int) 1.999999; // placingg (int) before value forces compiler to convert

printf("integar value: %d\n",a); // removes everything after dot(.)

// Prority Order/Precedence
// * , / , % ---> + , - ---> =
    printf("precedence: %d\n", 4+9*10);

// if precedence has same priority then it goes from left to right .
// for example,

printf("same precedence: %d\n", 4*3/6*2);



}