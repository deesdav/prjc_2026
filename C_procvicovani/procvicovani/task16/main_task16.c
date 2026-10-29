// #include <stdio.h>
//
// int uplatni_slevu(double *cena, int procenta_slevy, double *usetreno) {
//     if (cena == NULL || usetreno == NULL) {
//         return -1;
//     }
//     if (procenta_slevy < 0 || procenta_slevy > 100) {
//         return -2;
//     }
//     if (*cena < 0.0) {
//         return -3;
//     }
//     *usetreno = *cena * (procenta_slevy / 100.0);
//     *cena -= *usetreno;
//     return 0;
// }
//
// int main() {
//     double celkova_cena = 1500.0;
//     double sleva_kc;
//     printf("Puvodni cena: %.2f Kc\n", celkova_cena);
//     if (uplatni_slevu(&celkova_cena, 50, &sleva_kc) == 0) {
//         printf("Sleva uspesne zapoctena!\n");
//         printf("Nova cena:    %.2f Kc\n", celkova_cena);
//         printf("Usetreno:     %.2f Kc\n", sleva_kc);
//     } else {
//         printf("Chyba pri vypoctu slevy!\n");
//     }
//     return 0;
// }
