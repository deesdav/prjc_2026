// #include <stdio.h>
// #include <stdlib.h>
//
// int **allocate_triangular_task37(int rows) {
//     if (rows <= 0) {
//         return NULL;
//     }
//     int **arr = (int **) malloc(rows * sizeof(int *));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < rows; i++) {
//         int length = i + 2;
//         arr[i] = (int *) malloc(length * sizeof(int));
//         if (arr[i] == NULL) {
//             for (int j = 0; j < i; j++) {
//                 free(arr[j]);
//             }
//             free(arr);
//             return NULL;
//         }
//         arr[i][0] = length;
//     }
//
//     return arr;
// }
//
// void fill_and_print_task37(int **arr, int rows) {
//     if (rows <= 0 || arr == NULL) {
//         return;
//     }
//     //fill
//     for (int i = 0; i < rows; i++) {
//         for (int j = 1; j < arr[i][0]; j++) {
//             arr[i][j] = 1 + rand() % 99;
//         }
//     }
//     //print
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < arr[i][0]; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
//
// void free_triangular_task37(int **arr, int rows) {
//     if (rows <= 0 || arr == NULL) {
//         return;
//     }
//     for (int i = 0; i < rows; i++) {
//         free(arr[i]);
//     }
//     free(arr);
// }
//
// int main() {
//     int r = 4;
//     int **arr = allocate_triangular_task37(r);
//     if (arr == NULL) {
//         return 1;
//     }
//     fill_and_print_task37(arr, r);
//     free_triangular_task37(arr, r);
//
//     return 0;
// }
