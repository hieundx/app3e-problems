#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned short x, unsigned short y) {
    return x < (unsigned short) (x + y);
}

int main() {
    // 4-bit integers
    unsigned short x = 65535;
    unsigned short y = 1; 

    printf("%d\n", uadd_ok(x, y));
}