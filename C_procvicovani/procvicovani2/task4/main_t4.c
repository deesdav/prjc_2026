// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_t4(int size, int min, int max) {
//     if (size <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(size * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         arr[i] = min + rand() % (max - min + 1);
//     }
//     return arr;
// }
//
// int *find_interaction_t4(const int *arr_a, int size_a, const int *arr_b, int size_b, int *out_count) {
//     if (size_a <= 0 || size_b <= 0 || arr_a == NULL || arr_b == NULL || out_count == NULL) {
//         return NULL;
//     }
//
//     int count = 0;
//     for (int i = 0; i < size_a; i++) {
//         for (int j = 0; j < size_b; j++) {
//             if (arr_a[i] == arr_b[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }
//     *out_count = count;
//     if (count == 0) {
//         return NULL;
//     }
//     int *interaction_arr = (int *) malloc(count * sizeof(int));
//     if (interaction_arr == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < size_a; i++) {
//         for (int j = 0; j < size_b; j++) {
//             if (arr_a[i] == arr_b[j]) {
//                 interaction_arr[idx++] = arr_a[i];
//                 break;
//             }
//         }
//     }
//     return interaction_arr;
// }
//
// void print_array_t4(char *label, const int *arr, int size) {
//     if (size <= 0 || arr == NULL || label == NULL) {
//         return;
//     }
//     printf("%s: ", label);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
//
//
// int main() {
//     int n = 6;
//     int *arr = alloc_and_fill_t4(n, 1, 9);
//     int *arr2 = alloc_and_fill_t4(n, 1, 9);
//     print_array_t4("Array 1", arr, n);
//     print_array_t4("Array 2", arr2, n);
//     int count = 0;
//
//     int *interaction_arr = find_interaction_t4(arr, n, arr2, n, &count);
//     if (count == 0) {
//         free(arr);
//         free(arr2);
//         free(interaction_arr);
//         printf("No interactions found\n");
//         return 1;
//     }
//     print_array_t4("Interaction Array", interaction_arr, count);
//
//     free(arr);
//     free(arr2);
//     free(interaction_arr);
//     arr = NULL;
//     arr2 = NULL;
//     interaction_arr = NULL;
//     return 0;
// }
