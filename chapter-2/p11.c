#include <stdio.h>

void inplace_swap(int* x, int* y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;

    // terminate condition is first < last because if first == last, inplace_swap sets middle element to 0 when array length = 2k+1
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

void print_array(int a[], int cnt) {
    for (int i = 0; i < cnt; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int cnt = sizeof(a) / sizeof(a[0]);

    print_array(a, cnt);
    reverse_array(a, cnt);
    print_array(a, cnt);
    return 0;
}