#include <stdio.h>

int main() {
    // truncation
    int large_num = 65537;          // 32-bit: 00000000 00000001 00000000 00000001
    short truncated = large_num;    // Truncate to 16-bit: 00000000 00000001
    printf("Original: %d\n", large_num);
    printf("Truncated: %d\n", truncated); // Outputs 1

    int neg_num = -32769;           // 32-bit: 11111111 11111111 01111111 11111111
    short neg_truncated = neg_num;  // Truncate to 16-bit: 01111111 11111111
    printf("Original: %d\n", neg_num);
    printf("Truncated: %d\n", neg_truncated); // Outputs 32767

    // unsigned addition overflow
    unsigned short x;

    x = 1;
    printf("-1 = %u\n", -x);

    x = 42;
    printf("-42 = %u\n", -x);

    // signed addition overflow
    // postive overflow
    short a, b, result;
    a = 30000;
    b = 5000;
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);

    // negative overflow
    a = -20000;
    b = -15000;
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
}