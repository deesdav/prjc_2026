// #include <stdio.h>
//
// void print_double_bytes_task9(const double *val) {
//     const unsigned char *b = (unsigned char *) val;
//     for (int i = 0; i < sizeof(double); i++) {
//         printf("%02X ", *(b + i));
//     }
//     printf("\n");
// }
//
// void swap_double_halves_task9(double *val) {
//     unsigned char *b = (unsigned char *) val;
//     for (int i = 0; i < 4; i++) {
//         unsigned char temp = b[i + 4];
//         b[i + 4] = b[i];
//         b[i] = temp;
//     }
// }
//
// void swap_double_halves2_task9(double *val) {
//     // moznost pres int
//     int *b = (int *) val;
//     int temp = *b;
//     *b = *(b + 1);
//     *(b + 1) = temp;
// }
//
//
// int main() {
//     double d = 3.1415926535;
//     printf("Default \n");
//     print_double_bytes_task9(&d);
//     swap_double_halves_task9(&d);
//     printf("Swapped option 1\n");
//     print_double_bytes_task9(&d);
//
//     swap_double_halves2_task9(&d);
//     printf("Swapped option 2\n");
//     print_double_bytes_task9(&d);
//
//     return 0;
// }
