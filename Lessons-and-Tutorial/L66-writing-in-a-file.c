#include <stdio.h>

int main()
{
    FILE *fptr = fopen("TEST.txt", "r");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
}