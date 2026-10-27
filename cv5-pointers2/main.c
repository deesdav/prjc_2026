#include <stdio.h>
#include <stdlib.h>

int *alloc_and_fill_array_cv5(int size) {
    if (size <= 0) {
        return NULL;
    }
    int *array = (int *) malloc(size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
    return array;
}

int *even_array_cv5(int *array, int size) {
    if (size <= 0 || array == NULL) {
        return NULL;
    }
    int *even_array_ptr = (int *) malloc(size * sizeof(int));
    if (even_array_ptr == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even_array_ptr[i] = array[i];
            array[i] = 0;
        } else {
            even_array_ptr[i] = 0;
        }
    }
    return even_array_ptr;
}

int **sort_both_arrays_cv5(int **arrays, int size) {
    if (size <= 0 || arrays == NULL || arrays[0] == NULL || arrays[1] == NULL) {
        return NULL;
    }
    int **sort_array_ptr = (int **) malloc(2 * size * sizeof(int *));
    if (sort_array_ptr == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        sort_array_ptr[i] = &arrays[0][i];
        sort_array_ptr[size + i] = &arrays[1][i];
    }
    for (int i = 0; i < 2 * size; i++) {
        for (int j = 0; j < 2 * size - 1 - i; j++) {
            if (*sort_array_ptr[j] > *sort_array_ptr[j + 1]) {
                int *temp = sort_array_ptr[j];
                sort_array_ptr[j] = sort_array_ptr[j + 1];
                sort_array_ptr[j + 1] = temp;
            }
        }
    }
    return sort_array_ptr;
}

void print_sort_array_cv5(int **arrays, int size) {
    if (size <= 0 || arrays == NULL) {
        return;
    }
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", *arrays[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    int *array = alloc_and_fill_array_cv5(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    int *even_array = even_array_cv5(array, n);
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    int *both[2] = {array, even_array};
    int **arrays = sort_both_arrays_cv5(both, n);
    print_sort_array_cv5(arrays, n);

    free(array);
    free(even_array);
    free(arrays);

    array = NULL;
    even_array = NULL;
    arrays = NULL;

    return 0;
}
