// #include <stdio.h>
// #include <stdlib.h>
// #include "tools.h"
//
// int main() {
//     int n = 10;
//     double *double_pole = alloc_arr(n);
//
//     fill_arr(n, double_pole);
//     printf("\n=== DOUBLE ARRAY (LENGHT: %d) WITH RANDOM VALUES ===\n", n);
//     print_double_arr(n, double_pole);
//
//
//     int index = 2;
//     int length = (int) double_pole[index];
//     printf("\n=== INT ARRAY (LENGHT: %d) CREATED FROM DOUBLE ARRAY WITH INT VALUES ===\n", length);
//     int *int_pole = create_int_arr(double_pole, index);
//     print_int_arr(length, int_pole);
//
//     printf("\n=== TEST RESULTS ===\n");
//     if (test_int_arr(double_pole, index, int_pole)) {
//         printf("TEST USPESNY: Int pole bylo spravne vytvoreno dle n-teho prvku double pole.\n");
//     } else {
//         printf("TEST SELHAL!\n");
//     }
//
//     free(double_pole);
//     double_pole = NULL;
//     free(int_pole);
//     int_pole = NULL;
//
//     return 0;
// }
