// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
//     int N = 5;
//     int *nums = (int *) malloc(N * sizeof(int));
//     if (nums == NULL) {
//         printf("Chyba: Nedostatek paměti!\n");
//         return 1;
//     }
//
//     nums[0] = 5;
//     nums[1] = 12;
//     nums[2] = 3;
//     nums[3] = 20;
//     nums[4] = 8;
//
//     for (int i = 0; i < N; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
//
//     int *higher[5];
//     int higher_count = 0;
//
//     for (int i = 0; i < N; i++) {
//         if (nums[i] > 10) {
//             higher[higher_count] = &nums[i];
//             higher_count++;
//         }
//     }
//
//     for (int i = 0; i < higher_count; i++) {
//         printf("%d ", *higher[i]);
//     }
//     printf("\n");
//
//     *higher[0] = 99;
//     for (int i = 0; i < higher_count; i++) {
//         printf("%d ", *higher[i]);
//     }
//     printf("\n");
//
//     free(nums);
//     nums = NULL;
//
//     return 0;
// }
