// 2d and 3d arrays

#include<stdio.h>

int main() {
    // we have to print score of 3 subjects of 2 persons 

    int marks[2][3] = {{100,99,95},{80,85,88}};

    for (int i = 0 ; i < 2 ;i++) {
        for (int j = 0; j < 3 ; j++) {
            printf("%d\t",marks[i][j]);
        }
    printf("\n");
    }






}