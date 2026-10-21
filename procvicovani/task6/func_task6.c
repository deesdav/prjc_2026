#include "func_task6.h"
#include <stdio.h>

void swap_double4_bytes(double *p) {
    unsigned char *bit = (unsigned char *) p;
    for (int i = 0; i < sizeof(int); i++) {
        unsigned char tmp = bit[i + 4];
        bit[i + 4] = bit[i];
        bit[i] = tmp;
    }
}
