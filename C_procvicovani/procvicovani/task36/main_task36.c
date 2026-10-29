// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_taks36(int N) {
//     if (N <= 0) return NULL;
//     int *arr = (int *) malloc(N * sizeof(int));
//     if (arr == NULL) return NULL;
//
//     for (int i = 0; i < N; i++) {
//         arr[i] = -50 + rand() % 100;
//     }
//     return arr;
// }
//
// void filter_numbers_taks36(int *arr, int N, int **positives, int **negatives, int *pos_count, int *neg_count) {
//     if (N <= 0 || arr == NULL || positives == NULL || negatives == NULL || pos_count == NULL || neg_count == NULL) {
//         return;
//     }
//     int pos = 0;
//     int neg = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] > 0) {
//             positives[pos] = &arr[i];
//             pos++;
//         } else if (arr[i] < 0) {
//             negatives[neg] = &arr[i];
//             neg++;
//         }
//     }
//     *pos_count = pos;
//     *neg_count = neg;
// }
//
// void print_filtered_numbers_taks36(int **arr, int N) {
//     if (N <= 0 || arr == NULL) {
//         return;
//     }
//     for (int i = 0; i < N; i++) {
//         printf("%d ", *arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int n = 7;
//     int *arr = alloc_and_fill_taks36(n);
//     printf("Original Array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//
//     int **positives = (int **) malloc(n * sizeof(int *));
//     int **negatives = (int **) malloc(n * sizeof(int *));
//     int pos_count = 0;
//     int neg_count = 0;
//     filter_numbers_taks36(arr, n, positives, negatives, &pos_count, &neg_count);
//     printf("Positive: ");
//     print_filtered_numbers_taks36(positives, pos_count);
//     printf("Negative: ");
//     print_filtered_numbers_taks36(negatives, neg_count);
//
//     free(arr);
//     free(positives);
//     free(negatives);
//     arr = NULL;
//     positives = NULL;
//     negatives = NULL;
//
//     return 0;
// }
