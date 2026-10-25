#include <stdio.h>
#include"memory_tools_task26.h"

void get_type_sizes_task26(int *s_int, int *s_char, int *s_double, int *s_float) {
    *s_int = sizeof(int);
    *s_char = sizeof(char);
    *s_double = sizeof(double);
    *s_float = sizeof(float);
}

void print_bytes_task26(const void *ptr, int size) {
    if (size <= 0 || ptr == NULL) {
        return;
    }
    const unsigned char *b = (const unsigned char *) ptr;
    for (int i = 0; i < size; i++) {
        printf("%02x ", b[i]);
    }
    printf("\n");
}

void zero_second_half_task26(double *val) {
    if (val == NULL) {
        return;
    }
    unsigned char *b = (unsigned char *) val;
    for (int i = 4; i < 8; i++) {
        b[i] = 0;
    }
}


int test_sizes(void) {
    int i = 0, c = 0, d = 0, f = 0;

    // 1. Zavoláš svou funkci
    get_type_sizes_task26(&i, &c, &d, &f);
    if (i != sizeof(int) || c != sizeof(char) || d != sizeof(double) || f != sizeof(float)) {
        return 0;
    }
    return 1;
}
