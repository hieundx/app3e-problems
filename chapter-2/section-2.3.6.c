#include <stdio.h>

#include <stdlib.h>

char* int_to_binary_string(int n) {
    int num_bits = sizeof(int) * 8;
    char* binary = malloc(num_bits + 1);
    if (!binary) return NULL;
    binary[num_bits] = '\0';
    for (int i = num_bits - 1; i >= 0; i--) {
        binary[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    return binary;
}

int main() {
    // multiply by a constant 2^k by appending k 0s to the right
    int x = 2;
    printf("x: %s\n", int_to_binary_string(x));
    printf("x * 2^k where k = 1: %s\n", int_to_binary_string(x * 2));
    printf("x * 2^k where k = 2: %s\n", int_to_binary_string(x * 4));
    printf("x * 2^k where k = 3: %s\n", int_to_binary_string(x * 8));
}