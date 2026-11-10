// #include <stdio.h>
// #include <stdlib.h>
// #include "tools_t14.h"
//
//
// int main() {
//     int n = 6;
//     int threshold = 50;
//     int passed_count = 0;
//     int failed_count = 0;
//
//     Student_t14 *student = allocate_student_t14(n);
//
//     Student_t14 *failed = move_failed_t14(n, student, threshold, &passed_count, &failed_count);
//
//     Student_t14 **refs = create_refs_t14(student, passed_count, failed, failed_count);
//
//     print_refs_t14(refs, passed_count + failed_count);
//     sort_student_t14(refs, passed_count + failed_count);
//     print_refs_t14(refs, passed_count + failed_count);
//     free_refs_t14(student, failed, refs);
//     student = NULL;
//     failed = NULL;
//     refs = NULL;
//
//     return 0;
// }
