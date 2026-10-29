// #include <stdio.h>
// #include "memory_tools_task26.h"
//
// int main() {
//     int s_int, s_char, s_double, s_float;
//     get_type_sizes_task26(&s_int, &s_char, &s_double, &s_float);
//     printf("s_int = %d\n", s_int);
//     printf("s_char = %d\n", s_char);
//     printf("s_double = %d\n", s_double);
//     printf("s_float = %d\n", s_float);
//
//     char text[] = "ahoj ";
//     print_bytes_task26(text, sizeof(text));
//
//     double value = 12.09;
//     print_bytes_task26(&value, sizeof(value));
//     zero_second_half_task26(&value);
//     print_bytes_task26(&value, sizeof(value));
//     if (test_sizes() != 0) {
//         printf("Function get_type_sizes_task26 works\n");
//     } else {
//         printf("Function get_type_sizes_task26 do not works\n");
//     }
//
//     return 0;
// }
