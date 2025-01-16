
// FILE is a (hidden) stucture that needs to created for opening a file

// A FILE ptr that points to this structure

#include <stdio.h>

int main()
{

    FILE *fptr; // FILE pointer declare

    // format : fopen("filename",mode )
    fptr = fopen("TEST.txt", "w");

    if (fptr == NULL) // if theres isn't a file named TEXT.txt it will return NULL 
    {
        printf("file doesn't exist.");
    }
    else
    {
        
        fclose(fptr);
    }

    return 0;

    /*modes :
    "r" open to read
    "rb" open to read in binary
    "w" open to write
    "wb" open to write in binary
    "a" open to append
    */
}
