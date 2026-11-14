// #include <stdio.h>
// #include <stdlib.h>
//
// float *alloc_and_fill_t22(int N, int min, int max) {
//     if (N <= 0) return NULL;
//     float *arr = (float *) malloc(N * sizeof(float));
//     if (arr == NULL) return NULL;
//     for (int i = 0; i < N; i++) {
//         arr[i] = (float) (min + rand() % (max - min + 1));
//     }
//     return arr;
// }
//
// float **find_match_t22(const float *arr1, int N1, const float *arr2, int N2, int *out_count) {
//     if (N1 <= 0 || arr1 == NULL || N2 <= 0 || arr2 == NULL || out_count == NULL) return NULL;
//     int count = 0;
//     for (int i = 0; i < N1; i++) {
//         for (int j = 0; j < N2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_count = count;
//     if (count == 0) return NULL;
//     float **matches = (float **) malloc(count * sizeof(float *));
//     if (matches == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < N1; i++) {
//         for (int j = 0; j < N2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 matches[idx++] = (float *) &arr1[i];
//                 break;
//             }
//         }
//     }
//     return matches;
// }
//
//
// void print_arr_t22(const char *label, const float *arr, int N) {
//     if (N <= 0 || arr == NULL) return;
//     printf("%s: ", label);
//     for (int i = 0; i < N; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");
// }
//
// int print_refs_t22(const char *label, float **refs, int count) {
//     if (count <= 0 || refs == NULL) return -1;
//     printf("%s: ", label);
//     for (int i = 0; i < count; i++) {
//         printf("%.2f ", *refs[i]);
//     }
//     printf("\n");
//     return 0;
// }
//
// int main() {
//     int n1 = 5, n2 = 7;
//     float *arr1 = alloc_and_fill_t22(n1, 1, 5);
//     float *arr2 = alloc_and_fill_t22(n2, 1, 5);
//     print_arr_t22("Array 1", arr1, n1);
//     print_arr_t22("Array 2", arr2, n2);
//     int count = 0;
//     float **refs = find_match_t22(arr1, n1, arr2, n2, &count);
//     if (count > 0 && refs != NULL) {
//         print_refs_t22("Matched array", refs, count);
//     } else {
//         printf("No match\n");
//     }
//     free(arr1);
//     free(arr2);
//     free(refs);
//     arr1 = NULL;
//     arr2 = NULL;
//     refs = NULL;
//
//     return 0;
// }
