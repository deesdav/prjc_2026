#include <stdio.h>
#include <stdlib.h>

int *alloc_and_fill_t2(int n) {
    if (n <= 0) {
        return NULL;
    }
    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 101;
    }
    return arr;
}

void analyze_array_t2(const int *arr, int n, int *out_min, int *out_max, double *out_avg) {
    if (n <= 0 || arr == NULL || out_min == NULL || out_max == NULL || out_avg == NULL) {
        return;
    }
    int min = arr[0];
    int max = arr[0];
    double total = 0.0;
    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    avg = (double) total / n;
    *out_min = min;
    *out_max = max;
    *out_avg = avg;
}

void print_arr_t2(const int *arr, int n) {
    if (n <= 0 || arr == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 8;
    int *arr = alloc_and_fill_t2(n);
    print_arr_t2(arr, n);
    int min = 0;
    int max = 0;
    double avg = 0.0;
    analyze_array_t2(arr, n, &min, &max, &avg);
    printf("min = %d, max = %d, avg = %.2lf\n", min, max, avg);

    free(arr);
    arr = NULL;

    return 0;
}
