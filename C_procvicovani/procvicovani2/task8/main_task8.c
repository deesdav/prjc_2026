// #include <stdio.h>
// #include <stdlib.h>
//
// char *alloc_arr_and_fill_t8(int N) {
//     if (N <= 0) return NULL;
//     char *arr = (char *) malloc(N * sizeof(char));
//     if (arr == NULL) return NULL;
//     for (int i = 0; i < N; i++) {
//         arr[i] = (char) ('A' + rand() % ('Z' - 'A' + 1));
//     }
//     return arr;
// }
//
// int print_mask(const char *arr, int N, char mask) {
//     if (N <= 0 || arr == NULL) {
//         return -1;
//     }
//     for (int i = 0; i < N; i++) {
//         if (arr[i] != mask) {
//             printf("%c ", arr[i]);
//         } else {
//             printf("%c ", 'X');
//         }
//     }
//     printf("\n");
//     return 0;
// }
//
//
// int main() {
//     int N = 5;
//     char *arr = alloc_arr_and_fill_t8(N);
//     for (int i = 0; i < N; i++) {
//         printf("%c ", arr[i]);
//     }
//     printf("\n");
//     char mask = 'A';
//     printf("mask - %c\n", mask);
//     print_mask(arr, N, 'A');
//     free(arr);
//     arr = NULL;
//     return 0;
// }
