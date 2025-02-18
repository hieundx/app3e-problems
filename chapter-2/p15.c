#include <stdio.h>

int is_equal(int x, int y) {
    return !(x ^ y);
}

int main() {
    int x = 10;
    int y = 20;
    printf("x: %d, y: %d\n", x, y);
    printf("is_equal: %d\n", is_equal(x, y));

    x = 10;
    y = 10;
    printf("x: %d, y: %d\n", x, y);
    printf("is_equal: %d\n", is_equal(x, y));
}