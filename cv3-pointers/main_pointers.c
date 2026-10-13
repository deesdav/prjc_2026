#include <stdio.h>
#include "functions.h"

int main() {
    int char_size;
    int int_size;
    int double_size;
    int float_size;

    get_sizes(&char_size, &int_size, &double_size, &float_size);
    printf("char_size = %d\nint_size = %d\ndouble_size = %d\nfloat_size = %d\n",
           char_size,
           int_size,
           double_size,
           float_size);

    double a = 100.0;

    printf("Value before: %f\n", a);
    print_double_bytes(&a);

    swap_double_halves(&a);

    printf("Value after: %f\n", a);
    print_double_bytes(&a);

    return 0;
}
