// #include <stdio.h>
// #include <stdlib.h>
//
// int create_array_task10(int **array, int n) {
//     if (n <= 0 || array == NULL) {
//         return -1;
//     }
//     *array = (int *) malloc(n * sizeof(int));
//     if (*array == NULL) {
//         return -2;
//     }
//
//     int *p_array = *array;
//     for (int i = 0; i < n; i++) {
//         p_array[i] = (i + 1) * 10;
//     }
//     return 0;
// }
//
// void print_array_task10(int *array, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(array + i));
//     }
//     printf("\n");
// }
//
// int main() {
//     int *my_array = NULL;
//     int n = 5;
//     int status = create_array_task10(&my_array, n);
//
//     if (status == 0) {
//         print_array_task10(my_array, n);
//         free(my_array);
//         my_array = NULL;
//     } else {
//         printf("Error creating array: %d\n", status);
//     }
//     return 0;
// }
