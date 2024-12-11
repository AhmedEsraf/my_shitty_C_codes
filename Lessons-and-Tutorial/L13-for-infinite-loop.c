#include <stdio.h>

int main() {
    for (int i = 1;; i++) { // Infinite loop: No condition specified in the middle
        printf("%d\n", i);
    }
    return 0;
}
