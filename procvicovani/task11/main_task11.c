// #include <stdio.h>
// #include <stdlib.h>
//
// int alloc_and_fill_array_task11(float **arr, int N) {
//     if (arr == NULL || N == 0) {
//         return -1;
//     }
//     *arr = (float *) malloc(N * sizeof(float));
//     if (*arr == NULL) {
//         return -2;
//     }
//     for (int i = 0; i < N; i++) {
//         (*arr)[i] = (float) (i % 3);
//     }
//     return 0;
// }
//
// int find_duplicates_task11(float *arr, int N, float ***out_dups, int *out_count) {
//     if (arr == NULL || N <= 0 || out_dups == NULL || out_count == NULL) {
//         return -1;
//     }
//     float **duplications = (float **) malloc(N * sizeof(float *));
//
//     if (duplications == NULL) {
//         return -2;
//     }
//     int count = 0;
//
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (arr[i] == arr[j]) {
//                 duplications[count] = &arr[i];
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_dups = duplications;
//     *out_count = count;
//     return 0;
// }
//
// int swap_bytes_task11(float **arr, int N) {
//     if (arr == NULL || N <= 0) {
//         return -1;
//     }
//     for (int i = 0; i < N; i++) {
//         unsigned char *b = (unsigned char *) arr[i];
//
//         unsigned char tmp;
//
//         tmp = b[0];
//         b[0] = b[2];
//         b[2] = tmp;
//
//         tmp = b[1];
//         b[1] = b[3];
//         b[3] = tmp;
//     }
//     return 0;
// }
//
// void print_array_task11(float **arr, int N) {
//     if (arr == NULL || N == 0) {
//         return;
//     }
//     for (int i = 0; i < N; i++) {
//         printf("%.2f\t", *arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int N = 10;
//     float *array = NULL;
//     float **duplications = NULL;
//     int count_duplications = 0;
//     if (alloc_and_fill_array_task11(&array, N) != 0) {
//         printf("Error allocating array\n");
//         return 1;
//     }
//
//     if (find_duplicates_task11(array, N, &duplications, &count_duplications) != 0) {
//         printf("Error finding duplicates\n");
//         free(array);
//         return 1;
//     }
//
//     printf("Founded duplications before swapped bytes: \n");
//     print_array_task11(duplications, count_duplications);
//
//     swap_bytes_task11(duplications, count_duplications);
//
//     printf("After swapped bytes: \n");
//     print_array_task11(duplications, count_duplications);
//
//     free(duplications);
//     free(array);
//
//     return 0;
// }
