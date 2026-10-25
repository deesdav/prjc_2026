// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_task34(int n) {
//     if (n <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(n * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n; i++) {
//         arr[i] = rand() % 100;
//     }
//     return arr;
// }
//
// int find_min_max_task34(const int *arr, int n, int *out_min, int *out_max) {
//     if (n <= 0 || arr == NULL || out_min == NULL || out_max == NULL) {
//         return -1;
//     }
//     *out_min = arr[0];
//     *out_max = arr[0];
//     for (int i = 0; i < n; i++) {
//         if (*out_min > arr[i]) {
//             *out_min = arr[i];
//         }
//         if (*out_max < arr[i]) {
//             *out_max = arr[i];
//         }
//     }
//     return 0;
// }
//
// int main() {
//     int n = 5;
//     int *arr = alloc_and_fill_task34(n);
//     int min, max;
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     find_min_max_task34(arr, n, &min, &max);
//     printf("min = %d, max = %d\n", min, max);
//
//     free(arr);
//     arr = NULL;
//
//     return 0;
// }
