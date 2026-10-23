// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// typedef struct {
//     char name[50];
//     int priority;
//     int examination[100];
// } Patient;
//
// int main() {
//     Patient *patients = malloc(3 * sizeof(Patient));
//     if (patients == NULL) {
//         return 1;
//     }
//     strcpy(patients[0].name, "John");
//     patients[0].priority = 5;
//     strcpy(patients[1].name, "Peter");
//     patients[1].priority = 1;
//     strcpy(patients[2].name, "Bill");
//     patients[2].priority = 3;
//
//     Patient *waiting_list[3];
//     for (int i = 0; i < 3; i++) {
//         waiting_list[i] = &patients[i];
//     }
//
//     for (int i = 0; i < 3; i++) {
//         for (int j = i + 1; j < 3; j++) {
//             if (waiting_list[i]->priority > waiting_list[j]->priority) {
//                 Patient *temp = waiting_list[i];
//                 waiting_list[i] = waiting_list[j];
//                 waiting_list[j] = temp;
//             }
//         }
//     }
//
//     for (int i = 0; i < 3; i++) {
//         printf("%s (priorita: %d)\n", waiting_list[i]->name, waiting_list[i]->priority);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("%s (priorita: %d)\n", patients[i].name, patients[i].priority);
//     }
//     free(patients);
//
//     return 0;
// }
