#include <stdio.h>

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]); // \t creates space foe 1 tab amount
    }
    printf("\n");
}

// or
void _printNumbers(int *arr, int n) // array's pointer 
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]); // \t creates space foe 1 tab amount
    }
    printf("\n");
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printNumbers(arr, 5);
    _printNumbers(arr,5);
    return 0;
}