// #include <stdio.h>
//
// void stepped_on_mine(int *hp) {
//     *hp -= 10;
// }
//
// void prohod(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
//
// int main() {
//     int hp = 100;
//     printf("hp = %d\n", hp);
//     stepped_on_mine(&hp);
//     stepped_on_mine(&hp);
//
//     printf("hp = %d\n", hp);
//
//     int x = 10;
//     int y = 20;
//
//     printf("x = %d, y = %d\n", x, y);
//     prohod(&x, &y);
//     printf("x = %d, y = %d\n", x, y);
//
//     return 0;
// }
