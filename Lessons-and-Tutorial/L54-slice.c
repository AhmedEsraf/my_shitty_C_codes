// write a function named slice, which takes a string and returns
// a sliced string from index n to m

#include <stdio.h>

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    printf("Sliced Version: %s", newStr);
}

int main()
{
    char str[100];
    printf("Enter Your Word: ");
    scanf("%s",str);


    int n, m;
    printf("Enter slicing Range (Two values): ");
    scanf("%d%d",&n,&m);

    slice(str, n, m);
}