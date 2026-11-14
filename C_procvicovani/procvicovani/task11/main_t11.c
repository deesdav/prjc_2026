// #include <stdio.h>
// #include <stdlib.h>
//
// double *alloc_and_fill_t11(int N, int max, int min) {
//     if (N <= 0) return NULL;
//     double *arr = (double *) malloc(N * sizeof(double));
//     if (arr == NULL) return NULL;
//     for (int i = 0; i < N; i++) {
//         arr[i] = (double) (min + rand() % (max - min + 1));
//     }
//     return arr;
// }
//
// double **find_dupes_t11(const double *arr, int N, int *out_count) {
//     if (N <= 0 || arr == NULL || out_count == NULL) return NULL;
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_count = count;
//     if (count == 0) return NULL;
//     double **dupes = (double **) malloc(count * sizeof(double *));
//     if (dupes == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (arr[i] == arr[j]) {
//                 dupes[idx++] = (double *) &arr[i];
//                 break;
//             }
//         }
//     }
//     return dupes;
// }
//
// int reverse_dupes_t11(double **refs, int count) {
//     if (refs == NULL || count == 0) return -1;
//     int len = sizeof(double);
//     for (int i = 0; i < count; i++) {
//         unsigned char *bytes = (unsigned char *) refs[i];
//         for (int j = 0; j < len / 2; j++) {
//             unsigned char temp = bytes[j];
//             bytes[j] = bytes[len - 1 - j];
//             bytes[len - 1 - j] = temp;
//         }
//     }
//     return 0;
// }
//
// void print_by_ints_t11(double **refs, int count) {
//     if (refs == NULL || count == 0) return;
//     for (int i = 0; i < count; i++) {
//         int *int_view = (int *) refs[i];
//         printf("Index: %d [%d %d]\n", i, int_view[0], int_view[1]);
//     }
// }
//
// int main() {
//     int N = 8;
//     double *arr = alloc_and_fill_t11(N, 5, 1);
//     printf("Original array: ");
//     for (int i = 0; i < N; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");
//     int count = 0;
//     double **dupes = find_dupes_t11(arr, N, &count);
//     printf("Dupe array: ");
//     for (int i = 0; i < count; i++) {
//         printf("%.2f ", *dupes[i]);
//     }
//     printf("\n");
//     print_by_ints_t11(dupes, count);
//     if (reverse_dupes_t11(dupes, count) == -1) {
//         free(dupes);
//         dupes = NULL;
//         return -1;
//     }
//     print_by_ints_t11(dupes, count);
//     free(arr);
//     arr = NULL;
//     free(dupes);
//     dupes = NULL;
//     return 0;
// }
