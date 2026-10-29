// #include <stdio.h>
// #include <stdlib.h>
//
// int *merge_two_arrays_task30(int *arr1, int *arr2, int n1, int n2) {
//     if (n1 <= 0 || n2 <= 0 || arr1 == NULL || arr2 == NULL) {
//         return NULL;
//     }
//     int n = n1 + n2;
//     if (n <= 0) {
//         return NULL;
//     }
//
//     int *merged_array = (int *) malloc(n * sizeof(int));
//     if (merged_array == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n1; i++) {
//         merged_array[i] = arr1[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         merged_array[n1 + i] = arr2[i];
//     }
//     return merged_array;
// }
//
// int main() {
//     int arr1[] = {4, 5, 6};
//     int arr2[] = {10, 30};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int *result = merge_two_arrays_task30(arr1, arr2, n1, n2);
//     int total = n1 + n2;
//     for (int i = 0; i < total; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");
//     free(result);
//     result = NULL;
//
//     return 0;
// }
