// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_t5(int size, int min_value, int max_value) {
//     if (size <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(size * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         arr[i] = min_value + rand() % (max_value - min_value + 1);
//     }
//     return arr;
// }
//
// int *find_difference_t5(const int *arr1, int size1, const int *arr2, int size2, int *out_count) {
//     if (size1 <= 0 || size2 <= 0 || arr1 == NULL || arr2 == NULL || out_count == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < size1; i++) {
//         int found = 0;
//         for (int j = 0; j < size2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 0) {
//             count++;
//         }
//     }
//     *out_count = count;
//     if (count == 0) {
//         return NULL;
//     }
//     int *diff_array = (int *) malloc(count * sizeof(int));
//     if (diff_array == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < size1; i++) {
//         int found = 0;
//         for (int j = 0; j < size2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 0) {
//             diff_array[idx++] = arr1[i];
//         }
//     }
//     return diff_array;
// }
//
// void print_array_t5(char *label, const int *arr, int size) {
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
//     int n = 6;
//     int *arr1 = alloc_and_fill_t5(n, 1, 10);
//     int *arr2 = alloc_and_fill_t5(n, 1, 10);
//     print_array_t5("arr1", arr1, n);
//     print_array_t5("arr2", arr2, n);
//     int count = 0;
//     int *diff_arr = find_difference_t5(arr1, n, arr2, n, &count);
//     print_array_t5("Difference", diff_arr, count);
//
//     free(arr1);
//     free(arr2);
//     free(diff_arr);
//     arr1 = NULL;
//     arr2 = NULL;
//     diff_arr = NULL;
//
//     return 0;
// }
