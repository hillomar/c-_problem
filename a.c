#include <stdio.h>

#define CONCAT(a, b) a##b

int main() {
    int xy = 10;
    printf("Value of xy: %d\n", CONCAT(x, y)); // Combines x and y into xy
    return 0;
}
