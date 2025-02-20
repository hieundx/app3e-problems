#include <stdio.h>

int div16(int x) {
    // Compute x / 16
    // x >> 4 is equivalent to x / 2^4
    // x >> 4 is faster than x / 16
    return x >> 4;
}

int main() {
    // unsigned division by a power of 2
    // shift right by k bits is equivalent to division by 2^k
    unsigned int x = 16;
    unsigned int y = 64;
    unsigned int z = 32;

    printf("16 / 4 (>>2) = %u\n", x >> 2);   // 16 / 4 = 4
    printf("64 / 8 (>>3) = %u\n", y >> 3);   // 64 / 8 = 8
    printf("32 / 2 (>>1) = %u\n", z >> 1);   // 32 / 2 = 16

    // signed division by a power of 2
    // shift right by k bits is equivalent to division by 2^k
    int a = -16;
    int b = -64;
    int c = -32;

    printf("-16 / 4 (>>2) = %d\n", a >> 2);   // -16 / 4 = -4
    printf("-64 / 8 (>>3) = %d\n", b >> 3);   // -64 / 8 = -8
    printf("-32 / 2 (>>1) = %d\n", c >> 1);   // -32 / 2 = -16

    // Problem 2.42
    a = 32;
    b = 64;

    printf("div16(32) = %d\n", div16(a));    // 32 / 16 = 2
    printf("div16(64) = %d\n", div16(b));    // 64 / 16 = 4
    printf("div16(-32) = %d\n", div16(-a));  // -32 / 16 = -2
    printf("div16(-64) = %d\n", div16(-b));  // -64 / 16 = -4
}