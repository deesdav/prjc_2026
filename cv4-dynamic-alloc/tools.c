#include "tools.h"
#include <stdio.h>
#include <stdlib.h>

double *alloc_arr(int n) {
    if (n <= 0) {
        return NULL;
    }
    return malloc(n * sizeof(double));
}

void fill_arr(int n, double *arr) {
    if (arr == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ((double) rand() / RAND_MAX) * 100.0;
    }
}

int *create_int_arr(double *double_arr, int n) {
    int double_arr_length = (int) double_arr[n];
    if (double_arr_length <= 0) {
        return NULL;
    }
    int *arr_int = malloc(double_arr_length * sizeof(int));
    if (arr_int == NULL) {
        return NULL;
    }
    for (int i = 0; i < double_arr_length; i++) {
        arr_int[i] = i;
    }
    return arr_int;
}

void print_double_arr(int n, double *arr) {
    for (int i = 0; i < n; i++) {
        printf("%.3f ", *(arr + i));
    }
    printf("\n");
}

void print_int_arr(int n, int *arr) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int test_int_arr(double *double_arr, int index, int *int_arr) {
    if (int_arr == NULL) {
        return 0;
    }

    int expected_size = (int) double_arr[index];
    if (expected_size <= 0) {
        return 0;
    }

    if (int_arr[expected_size - 1] == expected_size - 1) {
        return 1;
    }
    return 0;
}
