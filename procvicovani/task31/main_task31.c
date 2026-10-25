// #include <stdio.h>
// #include <stdlib.h>
//
//
// int split_array_task31(const int *arr, int n, int **first_half, int **second_half) {
//     if (n <= 0 || arr == NULL || first_half == NULL || second_half == NULL || n % 2 != 0) {
//         return -1;
//     }
//     int half = n / 2;
//     int *first_half_arr = (int *) malloc(sizeof(int) * half);
//     int *second_half_arr = (int *) malloc(sizeof(int) * half);
//     if (first_half_arr == NULL || second_half_arr == NULL) {
//         free(first_half_arr);
//         free(second_half_arr);
//         return -1;
//     }
//     for (int i = 0; i < half; i++) {
//         first_half_arr[i] = arr[i];
//     }
//     for (int i = 0; i < half; i++) {
//         second_half_arr[i] = arr[half + i];
//     }
//     *first_half = first_half_arr;
//     *second_half = second_half_arr;
//     return 0;
// }
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int *first_half;
//     int *second_half;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     if (split_array_task31(arr, n, &first_half, &second_half) == 0) {
//         int half = n / 2;
//         for (int i = 0; i < half; i++) {
//             printf("%d ", first_half[i]);
//         }
//         printf("\n");
//         for (int i = 0; i < half; i++) {
//             printf("%d ", second_half[i]);
//         }
//         printf("\n");
//
//         free(first_half);
//         free(second_half);
//         first_half = NULL;
//         second_half = NULL;
//     }
//     return 0;
// }
