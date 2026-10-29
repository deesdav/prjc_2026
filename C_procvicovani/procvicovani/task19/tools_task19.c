#include "tools_task19.h"

#include <stdio.h>
#include <stdlib.h>

void get_sizes_task19(int *short_size, int *long_size, int *float_size, int *void_ptr_value) {
    if (short_size == NULL || long_size == NULL || float_size == NULL || void_ptr_value == NULL) {
        return;
    }
    *short_size = sizeof(short);
    *long_size = sizeof(long);
    *float_size = sizeof(float);
    *void_ptr_value = sizeof(void *);
}

void print_num_by_bytes_task19(float *float_number) {
    if (float_number == NULL) {
        return;
    }
    unsigned char *b = (unsigned char *) float_number;
    for (int i = 0; i < sizeof(float); i++) {
        printf("%02X ", b[i]);
    }
    printf("\n");
}

void swap_float_halves_task19(float *float_number) {
    if (float_number == NULL) {
        return;
    }
    // short *two_bytes = (short *) float_number;
    // short temp = *two_bytes;
    // *two_bytes = *(two_bytes + 1);
    // *(two_bytes + 1) = temp;
    //
    unsigned char *b = (unsigned char *) float_number;
    for (int i = 0; i < 2; i++) {
        unsigned char temp = b[i];
        b[i] = b[i + 2];
        b[i + 2] = temp;
    }
}
