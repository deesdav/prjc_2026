// #include <stdio.h>
// #include <stdlib.h>
//
// #include "tools_task20.h"
//
// int main() {
//     int N = 5;
//     int short_array_size = 0;
//     float *arr = allocate_float_array_task20(N);
//     fill_float_array_task20(arr, N);
//     short *arr2 = create_short_array_from_elements_task20(arr, N, 3, &short_array_size);
//
//     for (int i = 0; i < N; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");
//
//     for (int i = 0; i < short_array_size; i++) {
//         printf("%hd ", arr2[i]);
//     }
//     printf("\n");
//
//     free(arr);
//     arr = NULL;
//     free(arr2);
//     arr2 = NULL;
//
//     return 0;
// }
