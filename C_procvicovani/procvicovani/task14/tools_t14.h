#ifndef PRJC_2026_TOOLS_T14_H
#define PRJC_2026_TOOLS_T14_H

typedef struct {
    int student_id;
    char name[50];
    int points;
} Student_t14;

Student_t14 *allocate_student_t14(int n);

Student_t14 *move_failed_t14(int n, Student_t14 *arr, int threshold, int *out_passed_count, int *out_failed_count);

Student_t14 **sort_student_t14(Student_t14 **refs, int n);

Student_t14 **create_refs_t14(Student_t14 *passed, int passed_count, Student_t14 *failed, int failed_count);

void print_refs_t14(Student_t14 **refs, int n);

void free_refs_t14(Student_t14 *passed, Student_t14 *failed, Student_t14 **refs);

#endif //PRJC_2026_TOOLS_T14_H
