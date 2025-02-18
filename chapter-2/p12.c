#include <stdio.h>

void question_a(int* x) {
    printf("AND operand: 0x%x\n", 255);
    
    *x = *x & 255;
}

void question_b(int *x) {
    int least_significant_byte = *x & 255;
    printf("Least significant bytes: 0x%x\n", least_significant_byte);
    int comp_x = ~(*x >> 8);
    printf("X shifted (8 bits): 0x%x\n", comp_x);
    comp_x = comp_x << 8;
    printf("X unshifted: 0x%x\n", comp_x);
    *x = comp_x | least_significant_byte;
}

void question_c(int *x) {
    int shift_x = *x >> 8;
    printf("X shifted (8 bits): 0x%x\n", shift_x);
    *x = shift_x << 8;
    printf("X unshifted: 0x%x\n", *x);
    *x = *x | 255;
}

int main() {
    int x = 0x87654321;
    printf("Question a\n");
    printf("x: 0x%x\n", x);
    question_a(&x);
    printf("x: 0x%x\n", x);
    printf("\n");

    x = 0x87654321;
    printf("Question b\n");
    printf("x: 0x%x\n", x);
    question_b(&x);
    printf("x: 0x%x\n", x);

    printf("\n");

    x = 0x87654321;
    printf("Question c\n");
    printf("x: 0x%x\n", x);
    question_c(&x);
    printf("x: 0x%x\n", x);
    return 0;
}