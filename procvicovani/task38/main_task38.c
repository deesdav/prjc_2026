// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_task38(int size) {
//     if (size <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(size * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         arr[i] = 1 + rand() % 100;
//     }
//     return arr;
// }
//
// void find_min_max_task38(int *arr, int size, int **min_ref, int **max_ref) {
//     if (size <= 0 || arr == NULL || min_ref == NULL || max_ref == NULL) {
//         return;
//     }
//     *min_ref = &arr[0];
//     *max_ref = &arr[0];
//     for (int i = 0; i < size; i++) {
//         if (**min_ref > arr[i]) {
//             *min_ref = &arr[i];
//         }
//         if (**max_ref < arr[i]) {
//             *max_ref = &arr[i];
//         }
//     }
// }
//
// int main() {
//     int n = 8;
//     int *arr = alloc_and_fill_task38(n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int *min_ptr = NULL;
//     int *max_ptr = NULL;
//     find_min_max_task38(arr, n, &min_ptr, &max_ptr);
//     printf("min = %d, max = %d\n", *min_ptr, *max_ptr);
//     *min_ptr = 0;
//     *max_ptr = 0;
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//
//     free(arr);
//     arr = NULL;
//
//     return 0;
// }
