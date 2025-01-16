// write a function to convert celcius to farenheit and avg score of math , science and ict

#include <stdio.h>

float celtofar(float cel) {
    return (cel * 9 / 5) + 32;
}

float avgscore (float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celtofar(celsius);
    printf("Fahrenheit equivalent: %.2f\n", fahrenheit);

    printf("again lol\n");
    float math, science, ict,avg;
    printf("Enter math, science and ict score : ");
    scanf("%f %f %f", &math, &science, &ict);

    avg = avgscore(math, science, ict);
    printf("Average score: %.2f\n", avg);


    
    return 0;
}