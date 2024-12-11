#include <stdio.h>

// Nested if-else

int main() {
     int number;
     printf("Enter Number: ");
     scanf("%d", &number);

     if (number >= 0)
     {
          printf("Number is Positive\n");
          if (number % 2 == 0)
          {
               printf(" And Number is even");
          }
          else
          {
               printf("And Number is odd");
          }
     }
     else
     {
          printf(" Number is Negative\n");
     }
     return 0;
}