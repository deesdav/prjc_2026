// #include <stdio.h>
//
// int division_with_modulo_task15(int delenec, int delitel, int *podil, int *zbytek) {
//     if (podil == NULL || zbytek == NULL) {
//         return -1;
//     }
//     if (delitel == 0) {
//         return -2;
//     }
//     *podil = delenec / delitel;
//     *zbytek = delenec % delitel;
//     return 0;
// }
//
// int main() {
//     int a = 17, b = 5;
//     int vysledek_podil, vysledek_zbytek;
//
//     if (division_with_modulo_task15(a, b, &vysledek_podil, &vysledek_zbytek) == 0) {
//         printf("%d / %d = %d (zbytek %d) \n", a, b, vysledek_podil, vysledek_zbytek);
//     } else {
//         printf("Error\n");
//     }
//     return 0;
// }
