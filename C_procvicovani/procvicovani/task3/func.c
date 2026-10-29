#include "func.h"
#include <stdio.h>

double sum_array(double *array, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(array + i);
    }
    return sum;
}

void print_array_task3(double *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.3f ", *(array + i));
    }
    printf("\n");
}
