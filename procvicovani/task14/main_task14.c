// #include <stdio.h>
//
// void find_min_max_task14(const int *pole, int n, int *vysledek_min, int *vysledek_max) {
//     if (pole == NULL || vysledek_min == NULL || vysledek_max == NULL || n <= 0) {
//         return;
//     }
//
//     *vysledek_min = pole[0];
//     *vysledek_max = pole[0];
//
//     for (int i = 1; i < n; i++) {
//         if (*vysledek_min > pole[i]) {
//             *vysledek_min = pole[i];
//         }
//         if (*vysledek_max < pole[i]) {
//             *vysledek_max = pole[i];
//         }
//     }
// }
//
// int main() {
//     int nums[] = {12, 4, 89, -3, 25, 0};
//     int min, max;
//     find_min_max_task14(nums, 6, &min, &max);
//     printf("min = %d, max = %d\n", min, max);
//
//     return 0;
// }
