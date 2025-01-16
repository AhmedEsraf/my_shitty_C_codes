#include <stdio.h>

int main() {
    FILE *fptr = fopen("TEST.txt", "r");
    if (fptr == NULL) {
        printf("Error: Unable to open file. Make sure 'TEST.txt' exists in the program directory.\n");
        return 1;
    }

    char ch;
    if (fscanf(fptr, "%c", &ch) == 1) {
        printf("Character: %c\n", ch);
    } else {
        printf("Error: File is empty or could not read character.\n");
    }

    fclose(fptr);
    return 0;
}
