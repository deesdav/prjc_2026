// #include <stdio.h>
// #include <stdlib.h>
//
// #include "tools_task27.h"
//
// int main() {
//     if (test_sequence_task27() == 1) {
//         printf("test_sequence() success\n");
//         double *arr = create_double_array_task27(10);
//         int n = 10;
//         arr[0] = 7.0;
//         arr[1] = 8.0;
//         arr[2] = 9.0;
//         arr[3] = 10.0;
//         arr[4] = 11.0;
//         arr[5] = 12.0;
//         arr[6] = 13.0;
//         arr[7] = 14.0;
//         arr[8] = 15.0;
//         arr[9] = 16.0;
//         int count = 0;
//         int *int_array = create_int_sequence_task27(arr, n, 9, &count);
//         for (int i = 0; i < count; i++) {
//             printf("%d ", int_array[i]);
//         }
//         printf("\n");
//
//
//         free(arr);
//         free(int_array);
//         arr = NULL;
//         int_array = NULL;
//     } else {
//         printf("test_sequence() fail\n");
//     }
//
//     return 0;
// }
