// #include <stdio.h>
// #include <stdlib.h>
//
// int *alloc_and_fill_task40(int size) {
//     if (size <= 0) {
//         return NULL;
//     }
//     int *arr = (int *) malloc(size * sizeof(int));
//     if (arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         arr[i] = 1 + rand() % 100;
//     }
//     return arr;
// }
//
// int *create_even_task40(int *array, int size) {
//     if (size <= 0 || array == NULL) {
//         return NULL;
//     }
//     int *even_arr = (int *) malloc(size * sizeof(int));
//     if (even_arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < size; i++) {
//         if (array[i] % 2 == 0) {
//             even_arr[i] = array[i];
//             array[i] = 0;
//         } else {
//             even_arr[i] = 0;
//         }
//     }
//     return even_arr;
// }
//
// void sort_and_print_task40(int **arrays, int size) {
//     if (size <= 0 || arrays == NULL || arrays[0] == NULL || arrays[1] == NULL) {
//         return;
//     }
//     int total = 2 * size;
//     int **new_array = (int **) malloc(sizeof(int *) * total);
//     if (new_array == NULL) {
//         return;
//     }
//     int count = 0;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < size; j++) {
//             new_array[count] = &arrays[i][j];
//             count++;
//         }
//     }
//     for (int i = 0; i < count; i++) {
//         for (int j = 0; j < count - i - 1; j++) {
//             if (*new_array[j] > *new_array[j + 1]) {
//                 int *temp = new_array[j];
//                 new_array[j] = new_array[j + 1];
//                 new_array[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < count; i++) {
//         printf("%d ", *new_array[i]);
//     }
//     printf("\n");
//
//     free(new_array);
// }
//
// int main() {
//     int size = 5;
//     int *odd_arr = alloc_and_fill_task40(size);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", odd_arr[i]);
//     }
//     int *even_arr = create_even_task40(odd_arr, size);
//     printf("\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", even_arr[i]);
//     }
//     printf("\n");
//     int *both[2] = {odd_arr, even_arr};
//     sort_and_print_task40(both, size);
//
//     free(odd_arr);
//     free(even_arr);
//     odd_arr = NULL;
//     even_arr = NULL;
//
//     return 0;
// }
