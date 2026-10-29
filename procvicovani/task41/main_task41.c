// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_array_task41(int n, int max_val) {
//     if (n <= 0 || max_val <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(n * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < n; i++) {
//         arr[i] = 1 + rand() % max_val;
//     }
//     return arr;
// }
//
// int **get_unique_array_task41(int *arr1, int n1, int *arr2, int n2, int *out_count) {
//     if (n1 <= 0 || n2 <= 0 || arr1 == NULL || arr2 == NULL || out_count == NULL) {
//         return NULL;
//     }
//     int total = n1 + n2;
//     int **unique_array = (int **) malloc(total * sizeof(int *));
//     if (unique_array == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < n1; i++) {
//         int is_duplicate = 0;
//         for (int j = 0; j < count; j++) {
//             if (*unique_array[j] == arr1[j]) {
//                 is_duplicate = 1;
//                 break;
//             }
//         }
//         if (is_duplicate == 0) {
//             unique_array[count] = &arr1[i];
//             count++;
//         }
//     }
//     for (int i = 0; i < n2; i++) {
//         int is_duplicate = 0;
//         for (int j = 0; j < count; j++) {
//             if (*unique_array[j] == arr2[j]) {
//                 is_duplicate = 1;
//                 break;
//             }
//         }
//         if (is_duplicate == 0) {
//             unique_array[count] = &arr2[i];
//             count++;
//         }
//     }
//     *out_count = count;
//     return unique_array;
// }
//
// void print_unique_array_task41(int **arr, int count) {
//     if (count <= 0 || arr == NULL) {
//         return;
//     }
//     for (int i = 0; i < count; i++) {
//         printf("%d ", *arr[i]);
//     }
//     printf("\n");
// }
//
// int main() {
//     int n1 = 8;
//     int n2 = 6;
//     int *arr1 = alloc_and_fill_array_task41(n1, 10);
//     int *arr2 = alloc_and_fill_array_task41(n2, 10);
//
//     if (arr1 == NULL || arr2 == NULL) {
//         free(arr1);
//         free(arr2);
//         return 1;
//     }
//     for (int i = 0; i < n1; i++) {
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < n2; i++) {
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");
//
//     int count = 0;
//     int **unique_array = get_unique_array_task41(arr1, n1, arr2, n2, &count);
//     printf("Unikatni prvky (%d): ", count);
//     print_unique_array_task41(unique_array, count);
//
//     free(arr1);
//     free(arr2);
//     free(unique_array);
//
//     arr1 = NULL;
//     arr2 = NULL;
//     unique_array = NULL;
//
//     return 0;
// }
