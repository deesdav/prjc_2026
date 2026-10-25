// #include <stdio.h>
//
// void swap_double_halves_task28(double *val) {
//     if (val == NULL) {
//         return;
//     }
//     unsigned char *b = (unsigned char *) val;
//     for (int i = 0; i < 4; i++) {
//         unsigned char temp = b[i];
//         b[i] = b[i + 4];
//         b[i + 4] = temp;
//     }
// }
//
//
// int main() {
//     double value = 10.146;
//
//     unsigned char *b = (unsigned char *) &value;
//     for (int i = 0; i < sizeof(double); i++) {
//         printf("%02X ", b[i]);
//     }
//     printf("\n");
//     swap_double_halves_task28(&value);
//     for (int i = 0; i < sizeof(double); i++) {
//         printf("%02X ", b[i]);
//     }
//     printf("\n");
//
//
//     return 0;
// }
