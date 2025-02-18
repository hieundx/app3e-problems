#include <stdio.h>

int main() {
    int a = 85; // 0x55
    int b = 70; // 0x46

    printf("a & b: 0x%x\t", a&b); 
    printf("a && b: %d\n", a&&b); 

    printf("a | b: 0x%x\t", a|b);
    printf("a || b: %d\n", a||b);

    printf("~a | ~b: 0x%x\t", ~a|~b);
    printf("!a || !b: %d\n", !a||!b);

    printf("a & !b: 0x%x\t", a&!b);
    printf("a && ~b: %d\n", a&&~b);
}