// #include <stdio.h>
// #include <stdlib.h>
//
// float *alloc_and_fill_t10(int N, int min, int max) {
//     if (N <= 0) return NULL;
//     float *arr = (float *) malloc(N * sizeof(float));
//     if (arr == NULL) return NULL;
//     for (int i = 0; i < N; i++) {
//         arr[i] = (float) (min + rand() % (max - min + 1));
//     }
//     return arr;
// }
//
// int calculate_average_t10(const float *arr, int N, float *average) {
//     if (N <= 0 || arr == NULL || average == NULL) return -1;
//     float total = 0.0f;
//     for (int i = 0; i < N; i++) {
//         total += arr[i];
//     }
//     *average = total / (float) N;
//     return 0;
// }
//
// void print_array_t10(const char *label, const float *arr, int N) {
//     if (N <= 0 || arr == NULL || label == NULL) return;
//     printf("%s: ", label);
//     for (int i = 0; i < N; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");
// }
//
// float **find_greater_than_average_t10(const float *arr, int N, float average, int *out_count) {
//     if (N <= 0 || arr == NULL || out_count == NULL) return NULL;
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         if (arr[i] > average) {
//             count++;
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
//     for (int i = 0; i < N; i++) {
//         if (arr[i] > average) {
//             new_arr[idx++] = (float *) &arr[i];
//         }
//     }
//     return new_arr;
// }
//
// void print_refs_t10(const char *label, float **refs, int count) {
//     if (count <= 0 || refs == NULL || label == NULL) return;
//     printf("%s: ", label);
//     for (int i = 0; i < count; i++) {
//         printf("%.2f ", *refs[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int N = 10;
//     float *arr = alloc_and_fill_t10(N, 1, 10);
//     if (arr == NULL) {
//         return 1;
//     }
//     float average = 0.0f;
//     int count = 0;
//
//     print_array_t10("Array", arr, N);
//
//     if (calculate_average_t10(arr, N, &average) == 0) {
//         printf("Average: %.2f\n", average);
//         float **greater_arr = find_greater_than_average_t10(arr, N, average, &count);
//         if (greater_arr != NULL) {
//             print_refs_t10("Greater than average array", greater_arr, count);
//             free(greater_arr);
//             greater_arr = NULL;
//         } else {
//             printf("None value is greater than average\n");
//         }
//     }
//     free(arr);
//     arr = NULL;
//     return 0;
// }
