#include <stdio.h>

void inplace_swap(int* x, int* y) {
    *y = *x ^ *y;
    printf("Step 1: x: %d, y: %d\n", *x, *y);

    *x = *x ^ *y;
    printf("Step 2: x: %d, y: %d\n", *x, *y);

    *y = *x ^ *y;
    printf("Step 3: x: %d, y: %d\n", *x, *y);
}

int main() {
    int x = 10;
    int y = 20;
    printf("x: %d, y: %d\n", x, y);
    inplace_swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}