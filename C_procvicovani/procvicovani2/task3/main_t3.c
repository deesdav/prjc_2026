#include <stdio.h>
#include <stdlib.h>

int *alloc_and_fill_t3(int size) {
    if (size <= 0) {
        return NULL;
    }
    int *arr = (int *) malloc(size * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = -30 + rand() % 61;
    }
    return arr;
}

int *extract_negative_t3(const int *arr, int size, int *out_count, int *out_sum) {
    if (size <= 0 || arr == NULL || out_count == NULL || out_sum == NULL) {
        return NULL;
    }

    int count = 0;
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
            total += arr[i];
        }
    }

    *out_count = count;
    *out_sum = total;

    if (count == 0) {
        return NULL;
    }

    int *neg_arr = (int *) malloc(count * sizeof(int));
    if (neg_arr == NULL) {
        return NULL;
    }
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            neg_arr[idx++] = arr[i];
        }
    }

    return neg_arr;
}

void print_arr_t3(const char *label, const int *arr, int size) {
    if (label == NULL || arr == NULL || size <= 0) {
        return;
    }
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

#define SIZE 8

int main() {
    int *arr = alloc_and_fill_t3(SIZE);
    print_arr_t3("Original Array", arr, SIZE);
    int count = 0;
    int sum = 0;
    int *neg_arr = extract_negative_t3(arr, SIZE, &count, &sum);
    print_arr_t3("Negative Array", neg_arr, count);
    printf("Sum of negative values = %d\n", sum);

    free(arr);
    free(neg_arr);
    arr = NULL;
    neg_arr = NULL;

    return 0;
}
