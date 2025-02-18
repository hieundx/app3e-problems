#include <stdio.h>
#include <limits.h>

int add_ok(short x, short y) {
    short sum = x + y;
    return  !((x > 0 && y > 0 && sum < 0) || (x < 0 && y < 0 && sum > 0));
}

int main() {
    // 4-bit integers
    signed short x = 32768;
    signed short y = 1; 

    printf("%d\n", add_ok(x, y));
}