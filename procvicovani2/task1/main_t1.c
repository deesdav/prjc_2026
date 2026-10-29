// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_t1(int n) {
//     if (n <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(n * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n; i++) {
//         arr[i] = -50 + rand() % 101;
//     }
//     return arr;
// }
//
// void print_array_t1(int *arr, int n) {
//     if (n <= 0 || arr == NULL) {
//         return;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
// int *filter_positives_t1(const int *arr, int n, int *out_positives_count) {
//     if (n <= 0 || arr == NULL || out_positives_count == NULL) {
//         return NULL;
//     }
//     int c_pos = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             c_pos++;
//         }
//     }
//     *out_positives_count = c_pos;
//     if (c_pos == 0) {
//         return NULL;
//     }
//
//     int *positives_array = (int *) malloc(n * sizeof(int));
//     if (positives_array == NULL) {
//         *out_positives_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             positives_array[idx] = arr[i];
//             idx++;
//         }
//     }
//     return positives_array;
// }
//
// int main() {
//     int n = 8;
//     int *arr = alloc_and_fill_t1(n);
//     print_array_t1(arr, n);
//     int count = 0;
//     int *positive_array = filter_positives_t1(arr, n, &count);
//     print_array_t1(positive_array, count);
//
//     free(arr);
//     free(positive_array);
//     arr = NULL;
//     positive_array = NULL;
//
//     return 0;
// }
