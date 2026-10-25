#include <stdio.h>
#include <stdlib.h>

int *alloc_and_fill_array_task35(int n) {
    if (n <= 0) {
        return NULL;
    }
    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int reverse_array_task35(int *arr, int n) {
    if (n <= 0 || arr == NULL) {
        return -1;
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[i];
        arr[i] = temp;
    }
    return 0;
}

void print_array_task35(int *arr, int n) {
    if (n <= 0 || arr == NULL) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    int *arr = alloc_and_fill_array_task35(n);
    if (arr == NULL) return 1;

    print_array_task35(arr, n);
    reverse_array_task35(arr, n);
    print_array_task35(arr, n);

    return 0;
}
