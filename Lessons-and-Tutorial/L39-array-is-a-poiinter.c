#include <stdio.h>

int main() {
    int price[5];

    // input 
    int *ptr = &price[0];
    for (int i = 0; i < 5; i++) {
        printf("Enter the price of item %d: ", i+1);
        scanf("%d", ptr + i);
    }   
    

    // output
    printf("Prices: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    // OR

    // printf("\nPrices: ");
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", price[i]);
    // }

}