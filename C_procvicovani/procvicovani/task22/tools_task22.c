#include "tools_task22.h"
#include <stdio.h>
#include <stdlib.h>

int *doubled_array_task22(int *array, int n) {
    if (n <= 0 || array == NULL) {
        return NULL;
    }
    int *new_array = (int *) malloc(n * sizeof(int));
    if (new_array == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        new_array[i] = array[i] * 2;
    }
    return new_array;
}

void print_array(int *array, int n) {
    if (n <= 0 || array == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
