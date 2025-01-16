#include <stdio.h>

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArr(int arr[], int n)
{
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {11, 2, 3, 6, 7};
    printf("Old array: ");
    printArr(arr, 5);
    reverseArray(arr, 5);
    printf("new array: ");
    printArr(arr, 5);
}