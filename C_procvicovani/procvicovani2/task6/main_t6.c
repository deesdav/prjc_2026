// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_t6(int size, int min_val, int max_val) {
//     if (size <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(size * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         arr[i] = min_val + rand() % (max_val - min_val + 1);
//     }
//     return arr;
// }
//
// int *extract_unique_t6(const int *arr, int size, int *out_count) {
//     if (size <= 0 || arr == NULL || out_count == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         int isSame = 0;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isSame = 1;
//                 break;
//             }
//         }
//         if (isSame == 0) {
//             count++;
//         }
//     }
//     *out_count = count;
//     if (count == 0) {
//         return NULL;
//     }
//     int *unique_arr = (int *) malloc(count * sizeof(int));
//     if (unique_arr == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < size; i++) {
//         int isSame = 0;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isSame = 1;
//                 break;
//             }
//         }
//         if (isSame == 0) {
//             unique_arr[idx++] = arr[i];
//         }
//     }
//     return unique_arr;
// }
//
// void print_array_t6(const char *label, const int *arr, int size) {
//     if (label == NULL || arr == NULL || size <= 0) {
//         return;
//     }
//     printf("%s: ", label);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int size = 10;
//     int *arr = alloc_and_fill_t6(size, 1, 10);
//     print_array_t6("arr", arr, size);
//     int unique_count = 0;
//     int *unique_arr = extract_unique_t6(arr, size, &unique_count);
//     print_array_t6("unique_arr", unique_arr, unique_count);
//     printf("Unique count: %d\n", unique_count);
//
//     free(arr);
//     free(unique_arr);
//     arr = NULL;
//     unique_arr = NULL;
//     return 0;
// }
