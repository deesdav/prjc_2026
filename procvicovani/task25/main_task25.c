// #include <stdio.h>
// #include <stdlib.h>
//
// #include "tools_task25.h"
//
// int main() {
//     int data[] = {12, -7, 0, 45, -2, -19, 8, 0, -1};
//     int n = sizeof(data) / sizeof(data[0]);
//     int *positives = NULL;
//     int pos_count = 0;
//     int *negatives = NULL;
//     int neg_count = 0;
//     if (split_array_task25(data, n, &positives, &pos_count, &negatives, &neg_count) == 0) {
//         printf("Full array:\n");
//         for (int i = 0; i < n; i++) {
//             printf("%d ", data[i]);
//         }
//         printf("\n");
//         printf("Positives:\n");
//         for (int i = 0; i < pos_count; i++) {
//             printf("%d ", positives[i]);
//         }
//         printf("\n");
//         printf("Negatives:\n");
//         for (int i = 0; i < neg_count; i++) {
//             printf("%d ", negatives[i]);
//         }
//         printf("\n");
//     }
//
//     free(positives);
//     free(negatives);
//     positives = NULL;
//     negatives = NULL;
//
//     return 0;
// }
