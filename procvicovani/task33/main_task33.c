// #include <stdio.h>
// #include <stdlib.h>
//
// char *alloc_and_array_task33(int N) {
//     if (N <= 0) return NULL;
//     char *array = (char *) malloc(N * sizeof(char));
//     if (array == NULL) return NULL;
//     for (int i = 0; i < N; i++) {
//         array[i] = 'A' + (rand() % 4);
//     }
//     return array;
// }
//
// int print_masked_task33(const char *array, int N, char mask) {
//     if (N <= 0 || array == NULL) return -1;
//     for (int i = 0; i < N; i++) {
//         if (array[i] == mask) {
//             printf("X ");
//         } else {
//             printf("%c ", array[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }
//
// int main() {
//     int N = 10;
//     char *array = alloc_and_array_task33(N);
//     if (array == NULL) return 1;
//
//     printf("Puvodni pole: ");
//     for (int i = 0; i < N; i++) {
//         printf("%c ", array[i]);
//     }
//     printf("\n");
//
//     printf("Vymaskovane (A): ");
//     print_masked_task33(array, N, 'A');
//
//     free(array);
//     array = NULL;
//
//     return 0;
// }
