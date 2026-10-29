// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_task39(int size) {
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
// int **merge_and_sort_task39(int *arr1, int size1, int *arr2, int size2) {
//     if (size1 <= 0 || size2 <= 0 || arr1 == NULL || arr2 == NULL) {
//         return NULL;
//     }
//     int total = size1 + size2;
//     int **new_arr = (int **) malloc(total * sizeof(int *));
//     if (new_arr == NULL || total <= 0) {
//         return NULL;
//     }
//     //merge
//     for (int i = 0; i < size1; i++) {
//         new_arr[i] = &arr1[i];
//     }
//     for (int i = 0; i < size2; i++) {
//         new_arr[size1 + i] = &arr2[i];
//     }
//     //sort
//     for (int i = 0; i < total; i++) {
//         for (int j = 0; j < total - i - 1; j++) {
//             if (*new_arr[j] < *new_arr[j + 1]) {
//                 int *temp = new_arr[j];
//                 new_arr[j] = new_arr[j + 1];
//                 new_arr[j + 1] = temp;
//             }
//         }
//     }
//     return new_arr;
// }
//
// void print_task39(int **arrs, int size) {
//     if (arrs == NULL || size <= 0) {
//         return;
//     }
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *arrs[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int size_a = 4, size_b = 6;
//     int *arr_a = alloc_and_fill_task39(size_a);
//     int *arr_b = alloc_and_fill_task39(size_b);
//     printf("Array A: ");
//     for (int i = 0; i < size_a; i++) {
//         printf("%d ", arr_a[i]);
//     }
//     printf("\n");
//     printf("Array B: ");
//     for (int i = 0; i < size_b; i++) {
//         printf("%d ", arr_b[i]);
//     }
//     printf("\n");
//     int **merged_arr = merge_and_sort_task39(arr_a, size_a, arr_b, size_b);
//     printf("Merged and sorted array : ");
//     print_task39(merged_arr, size_a + size_b);
//
//     free(arr_a);
//     free(arr_b);
//     free(merged_arr);
//     arr_a = NULL;
//     arr_b = NULL;
//     merged_arr = NULL;
//
//     return 0;
// }
