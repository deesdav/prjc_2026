#include "tools_task7.h"
#include <stdio.h>
#include <stdlib.h>

int *alloc_array(int n) {
    return (int *) malloc(n * sizeof(int));
}

void *fill_array(int *nums, int n) {
    if (nums == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        nums[i] = i * 10;
    }
}

void print_array(int *nums, int n) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(nums + i));
    }
    printf("\n");
}
