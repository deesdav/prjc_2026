#include "tools_task21.h"
#include <stdio.h>
#include <stdlib.h>

int *create_even_array_task21(int *array, int N, int *out_count) {
    if (N <= 0 || array == NULL || out_count == NULL) {
        return NULL;
    }

    int even_count = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] > 0 && array[i] % 2 == 0) {
            even_count++;
        }
    }
    *out_count = even_count;
    if (even_count == 0) {
        return NULL;
    }

    int *even_array = (int *) malloc(sizeof(int) * even_count);
    if (even_array == NULL) {
        *out_count = 0;
        return NULL;
    }

    int idx = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] > 0 && array[i] % 2 == 0) {
            even_array[idx] = array[i];
            idx++;
        }
    }

    return even_array;
}

void print_array_task21(int *array, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
