// #include <stdio.h>
// #include <stdlib.h>
//
// int *duplicate_and_extend_task29(int *arr, int n) {
//     if (n <= 0 || arr == NULL) {
//         return NULL;
//     }
//     int *new_arr = (int *) malloc(2 * n * sizeof(int));
//     if (new_arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n; i++) {
//         new_arr[i] = arr[i];
//         new_arr[i + n] = arr[i];
//     }
//
//     return new_arr;
// }
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *new_arr = duplicate_and_extend_task29(arr, 5);
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", new_arr[i]);
//     }
//     printf("\n");
//
//     free(new_arr);
//     new_arr = NULL;
//
//
//     return 0;
// }
