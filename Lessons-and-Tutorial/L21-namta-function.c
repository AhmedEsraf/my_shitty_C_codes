// Namta lol what do u expect 


#include<stdio.h> 

void printNamta(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printNamta(n);
}

void printNamta(int n) {
    for(int i=1;i<=10;i++) {
        printf("%d x %d = %d \n",n,i,i*n);
    }
}