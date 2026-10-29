#include "func_task5.h"

void get_sizes_task5(int *p_int, int *p_float, int *p_double, int *p_char) {
    *p_int = sizeof(int);
    *p_float = sizeof(float);
    *p_double = sizeof(double);
    *p_char = sizeof(char);
}
