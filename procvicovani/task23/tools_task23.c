#include "tools_task23.h"
#include <stdio.h>
#include <stdlib.h>

int *reverse_array_task23(const int *array, int n) {
    if (n <= 0 || array == NULL) {
        return NULL;
    }
    int *new_array = (int *) malloc(sizeof(int) * n);
    if (new_array == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        new_array[i] = array[n - 1 - i];
    }
    return new_array;
}

void print_array_task23(int *array, int n) {
    if (n == 0 || array == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
