// create a 2d array , storing the tables of 2 & 3

#include <stdio.h>

void storeTable(int arr[][10], int row, int number)
{
    for (int i = 0; i < 10; i++)
    {
        arr[row][i] = number * (i + 1);
    }
}

int main()
{
    int tables[2][10];
    storeTable(tables, 0, 2);
    storeTable(tables, 1, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n", tables[0][0], i + 1, tables[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n", tables[1][0], i + 1, tables[1][i]);
    }

    printf("\n");
}