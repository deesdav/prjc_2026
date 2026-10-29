#include "functions.h"
#include <stdio.h>

double *find_max(double *arr, int n) {
    if (arr == NULL || n <= 0) {
        return NULL;
    }
    double *p_max = &arr[0];
    for (int i = 0; i < n; i++) {
        if (*p_max < arr[i]) {
            p_max = &arr[i];
        }
    }
    return p_max;
}

void print_array_task2(double *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.3f ", *(arr + i));
    }
    printf("\n");
}
