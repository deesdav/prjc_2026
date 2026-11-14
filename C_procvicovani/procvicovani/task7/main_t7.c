// #include <stdio.h>
// #include <stdlib.h>
//
// float *alloc_and_fill_t7(int n) {
//     if (n <= 0) return NULL;
//     float *arr = (float *) malloc(n * sizeof(float));
//     if (arr == NULL) return NULL;
//     for (int i = 0; i < n; i++) {
//         arr[i] = (float) (rand() % 11);
//     }
//     return arr;
// }
//
//
// float **find_same_refs_t7(const float *a, const float *b, int n, int *out_count) {
//     if (n <= 0 || a == NULL || b == NULL || out_count == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i] == b[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_count = count;
//     if (count == 0) {
//         return NULL;
//     }
//     float **new_arr = (float **) malloc(count * sizeof(float *));
//     if (new_arr == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[i] == b[j]) {
//                 new_arr[idx++] = (float *) &a[i];
//                 break;
//             }
//         }
//     }
//     return new_arr;
// }
//
// void print_arr_t7(const char *label, const float *arr, int n) {
//     if (n <= 0 || arr == NULL) {
//         return;
//     }
//     printf("%s: ", label);
//     for (int i = 0; i < n; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");
// }
//
// void print_refs_t7(const char *label, float **arr, int n) {
//     if (n <= 0 || arr == NULL) {
//         return;
//     }
//     printf("%s: ", label);
//     for (int i = 0; i < n; i++) {
//         printf("%.2f ", *arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int n = 8;
//     float *arr1 = alloc_and_fill_t7(n);
//     float *arr2 = alloc_and_fill_t7(n);
//     int count = 0;
//     float **same_refs = find_same_refs_t7(arr1, arr2, n, &count);
//     print_arr_t7("Array a", arr1, n);
//     print_arr_t7("Array b", arr2, n);
//     print_refs_t7("Same refs", same_refs, count);
//
//     free(arr1);
//     free(arr2);
//     free(same_refs);
//     arr1 = NULL;
//     arr2 = NULL;
//     same_refs = NULL;
//
//     return 0;
// }
