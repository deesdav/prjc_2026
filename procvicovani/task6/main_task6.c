#include <stdio.h>
#include "func_task6.h"

int main() {
    double x = 12345.678;
    char *b = (char *) &x;

    printf("\n=== BEFORE ===\n");
    for (int i = 0; i < sizeof(double); i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    swap_double4_bytes(&x);

    printf("\n=== AFTER ===\n");
    for (int i = 0; i < sizeof(double); i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
