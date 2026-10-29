#include "tools_task24.h"
#include <stdio.h>
#include <stdlib.h>

int *merge_array_task24(int *array1, int array1_size, int *array2, int array2_size) {
    if (array1_size <= 0 || array2_size <= 0 || array1 == NULL || array2 == NULL) {
        return NULL;
    }
    int total_size = array1_size + array2_size;
    int *merged_array = (int *) malloc(total_size * sizeof(int));
    if (merged_array == NULL) {
        return NULL;
    }
    for (int i = 0; i < array1_size; i++) {
        merged_array[i] = array1[i];
    }

    for (int j = 0; j < array2_size; j++) {
        merged_array[array1_size + j] = array2[j];
    }

    return merged_array;
}
