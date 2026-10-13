#include "functions.h"
#include <stdio.h>

void get_sizes(int *char_size, int *int_size, int *double_size, int *float_size) {
    *char_size = sizeof(char);
    *int_size = sizeof(int);
    *double_size = sizeof(double);
    *float_size = sizeof(float);
}

void swap_double_halves(double *d) {
    int *parts = (int *) d;

    int temp = *parts;
    *parts = *(parts + 1);
    *(parts + 1) = temp;
}

void print_double_bytes(double *d) {
    char *bytes = (char *) d;

    for (int i = 0; i < sizeof(double); i++) {
        printf("%d ", bytes[i]);
    }
    printf("\n");
}
