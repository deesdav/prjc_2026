#include "tools_task7.h"
#include <stdio.h>
#include <stdlib.h>

int *alloc_array(int n) {
    if (n <= 0) {
        return NULL;
    }
    return (int *) malloc(n * sizeof(int));
}

void fill_array(int *nums, int n) {
    if (nums == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        nums[i] = (i + 1) * 10;
    }
}

void print_array(int *nums, int n) {
    if (nums == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *(nums + i));
    }
    printf("\n");
}
