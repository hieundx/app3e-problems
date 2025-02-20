#include <stdio.h>

int uadd_ok(unsigned short x, unsigned short y) {
    // Check if the sum of two unsigned numbers overflow
    // x + y >= x
    return (unsigned short) (x + y) >= x;
}

int main() {
    // adding two unsigned numbers that overflow
    // 16 bits example
    unsigned short x = 65535; // 16-bit: 11111111 11111111
    unsigned short y = 1;     // 16-bit: 00000000 00000001

    // 11111111 11111111 + 00000000 00000001 = 100000000 00000000
    // truncating the leading 1, we get 00000000 00000000
    // x + y_u = x + y_t - 2^w where w is the number of bits
    // 65535 + 1 = 65535 + 1 - 2^16 = 0
    printf("x + y = %u\n", (unsigned short) (x + y));

    // problem 2.27
    printf("uadd_ok(65535, 1) = %d\n", uadd_ok(x, y)); // 1

    // unsigned negation
    printf("-1 = %u\n", -1); // 2^32 - 1 = 4294967296 - 1 = 4294967295
    printf("-42 = %u\n", -42); // 2^32 - 42 = 4294967296 - 42 = 4294967254
}