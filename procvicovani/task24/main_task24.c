// #include <stdio.h>
// #include <stdlib.h>
//
// #include "tools_task24.h"
//
// int main() {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int arr2[] = {1, 2, 3, 4, 5, 6};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int total = n1 + n2;
//     int *merged_array = merge_array_task24(arr1, n1, arr2, n2);
//
//     for (int i = 0; i < total; i++) {
//         printf("%d ", merged_array[i]);
//     }
//     printf("\n");
//
//     free(merged_array);
//     merged_array = NULL;
//
//     return 0;
// }
