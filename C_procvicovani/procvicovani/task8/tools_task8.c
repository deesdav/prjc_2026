#include <stdio.h>
#include "tools_task8.h"


int fill_even_array(int int_array[], int n, int *even_nums[]) {
    int even_count = 0;
    for (int i = 0; i < n; i++) {
        if (int_array[i] % 2 == 0) {
            even_nums[even_count] = &int_array[i];
            even_count++;
        }
    }
    return even_count;
}

void print_even_array(int *even_nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(even_nums[i]));
    }
    printf("\n");
}
