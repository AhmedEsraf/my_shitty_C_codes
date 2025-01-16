// write a function to count the number of odd numbers in an array

#include<stdio.h>

void printOddNumber (int arr[],int n) {
    int count = 0;
    for (int i = 0;i < n;i++ ) {
        if ( arr[i] % 2!= 0) {
            count++;
        }
    }

    printf("Number of odds: %d",count);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0;i < n; i++) {
        scanf("%d",&arr[i]);
    }

    printOddNumber(arr,n);

}