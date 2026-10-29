// #include <stdio.h>
// #include <stdlib.h>
//
// float *alloc_and_fill_array_task32(int n) {
//     if (n <= 0) {
//         return NULL;
//     }
//     float *array = (float *) malloc(n * sizeof(float));
//     if (array == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n; i++) {
//         array[i] = (float)(rand() % 30);
//     }
//     return array;
// }
//
// void print_array_task32(float *array, int N) {
//     if (N <= 0) {
//         return;
//     }
//     for (int i = 0; i < N; i++) {
//         printf("%.2f ", array[i]);
//     }
//     printf("\n");
// }
//
// float **find_same_values_task32(float *array1, int N, float *array2, int *out_count) {
//     if (N <= 0 || array1 == NULL || array2 == NULL || out_count == NULL) {
//         return NULL;
//     }
//     float **array3 = (float **) malloc(N * sizeof(float *));
//     if (array3 == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (array1[i] == array2[j]) {
//                 array3[count] = &array1[i];
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_count = count;
//
//     return array3;
// }
//
// int main() {
//     int n = 7;
//     float *arr1 = alloc_and_fill_array_task32(n);
//     float *arr2 = alloc_and_fill_array_task32(n);
//     if (arr1 == NULL || arr2 == NULL) {
//         free(arr1);
//         free(arr2);
//         return 1;
//     }
//
//     printf("Array 1: ");
//     print_array_task32(arr1, n);
//     printf("Array 2: ");
//     print_array_task32(arr2, n);
//
//     int count = 0;
//     float **arr3 = find_same_values_task32(arr1, n, arr2, &count);
//     if (arr3 != NULL) {
//         printf("Same: ");
//         for (int i = 0; i < count; i++) {
//             printf("%.2f ", *arr3[i]);
//         }
//         printf("\n");
//
//         free(arr3);
//         arr3 = NULL;
//     }
//
//     free(arr1);
//     free(arr2);
//     arr1 = NULL;
//     arr2 = NULL;
//
//     return 0;
// }
