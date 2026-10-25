#include <stdio.h>
#include "tools_task27.h"

#include <stdlib.h>

double *create_double_array_task27(int n) {
    if (n <= 0) {
        return NULL;
    }
    double *array = (double *) malloc(n * sizeof(double));
    if (array == NULL) {
        return NULL;
    }
    return array;
}

int *create_int_sequence_task27(const double *arr, int arr_size, int k, int *out_size) {
    if (arr_size <= 0 || k < 0 || k >= arr_size) {
        return NULL;
    }
    int count = (int) arr[k];
    if (count <= 0) {
        *out_size = 0;
        return NULL;
    }
    int *int_arr = (int *) malloc(count * sizeof(int));
    if (int_arr == NULL) return NULL;
    for (int i = 0; i < count; i++) {
        int_arr[i] = i;
    }
    *out_size = count;
    return int_arr;
}


int test_sequence_task27(void) {
    double test_data[] = {2.5, 4.8, 1.1};
    int n = sizeof(test_data) / sizeof(test_data[0]);
    int out_size = 0;
    int *int_arr = create_int_sequence_task27(test_data, n, 1, &out_size);
    if (int_arr == NULL || out_size != 4) {
        free(int_arr);
        return 0;
    }
    for (int i = 0; i < out_size; i++) {
        if (int_arr[i] != i) {
            free(int_arr);
            return 0;
        }
    }
    free(int_arr);
    return 1;
}
