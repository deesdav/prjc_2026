#include "tools_task20.h"
#include <stdio.h>
#include <stdlib.h>

float *allocate_float_array_task20(int N) {
    if (N <= 0) return NULL;
    return (float *) malloc(N * sizeof(float));
}

void fill_float_array_task20(float *arr, int N) {
    if (arr == NULL || N <= 0) return;
    for (int i = 0; i < N; i++) {
        arr[i] = (float) (i+1) * 1.5f;
    }
}

short *create_short_array_from_elements_task20(const float *arr, int N, int k, int *out_new_size) {
    if (arr == NULL || N <= 0 || out_new_size == NULL || k < 0 || k >= N) return NULL;
    int new_size = (int) arr[k];
    if (new_size <= 0) return NULL;
    short *new_arr = (short *) malloc(new_size * sizeof(short));
    if (new_arr == NULL) return NULL;

    for (int i = 0; i < new_size; i++) {
        new_arr[i] = (short) (new_size-i);
    }
    *out_new_size = new_size;
    return new_arr;
}
