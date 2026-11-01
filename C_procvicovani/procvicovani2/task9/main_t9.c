// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct {
//     char name[30];
//     float average;
// } Student;
//
// Student **choose_benefit_t9(const Student *arr, int n, float limit, int *out_count) {
//     if (n <= 0 || arr == NULL || out_count == NULL) {
//         return NULL;
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i].average <= limit) {
//             count++;
//         }
//     }
//     *out_count = count;
//     if (count == 0) {
//         return NULL;
//     }
//     Student **new_arr = (Student **) malloc(count * sizeof(Student *));
//     if (new_arr == NULL) {
//         *out_count = 0;
//         return NULL;
//     }
//     int idx = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i].average <= limit) {
//             new_arr[idx++] = (Student *) &arr[i];
//         }
//     }
//     return new_arr;
// }
//
// int print_studetnts(Student **refs, int count) {
//     if (refs == NULL || count == 0) {
//         return -1;
//     }
//     for (int i = 0; i < count; i++) {
//         printf("Name: %s, Average: %.2f\n", refs[i]->name, refs[i]->average);
//     }
//     return 0;
// }
//
// int main() {
//     Student s[3] = {
//         {"Jan", 1.2f},
//         {"David", 1.4f},
//         {"Tom", 3.5f},
//     };
//     int n = 3;
//     int count = 0;
//     float limit = 1.5f;
//     Student **results = choose_benefit_t9(s, n, limit, &count);
//     if (print_studetnts(results, count) == 0) {
//         free(results);
//         results = NULL;
//     }
//     return 0;
// }
