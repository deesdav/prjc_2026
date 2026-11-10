#include <stdio.h>
#include <stdlib.h>
#include "tools_t14.h"

Student_t14 *allocate_student_t14(int n) {
    if (n <= 0) {
        return NULL;
    }
    Student_t14 *arr = (Student_t14 *) malloc(sizeof(Student_t14) * n);
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        arr[i].student_id = i + 1;
        sprintf(arr[i].name, "Student_%d", i + 1);
        arr[i].points = rand() % 101;
    }
    return arr;
}

Student_t14 *move_failed_t14(int n, Student_t14 *arr, int threshold, int *out_passed_count,
                             int *out_failed_count) {
    if (n <= 0 || arr == NULL || out_failed_count == NULL || out_passed_count == NULL) {
        return NULL;
    }
    int count_passed = 0;
    int count_failed = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].points < threshold) {
            count_failed++;
        } else {
            count_passed++;
        }
    }
    *out_failed_count = count_failed;
    *out_passed_count = count_passed;
    if (count_passed == 0) return NULL;
    if (count_failed == 0) return NULL;
    Student_t14 *failed_students = malloc(count_failed * sizeof(Student_t14));
    if (failed_students == NULL) {
        *out_failed_count = 0;
        *out_passed_count = 0;
        return NULL;
    }
    int idx_f = 0;
    int idx_p = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].points < threshold) {
            failed_students[idx_f++] = arr[i];
        } else {
            arr[idx_p++] = arr[i];
        }
    }
    return failed_students;
}

Student_t14 **sort_student_t14(Student_t14 **refs, int n) {
    if (refs == NULL || n == 0) {
        return NULL;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (refs[j]->points < refs[j + 1]->points) {
                Student_t14 *temp = refs[j];
                refs[j] = refs[j + 1];
                refs[j + 1] = temp;
            }
        }
    }
    return refs;
}

Student_t14 **create_refs_t14(Student_t14 *passed, int passed_count, Student_t14 *failed, int failed_count) {
    if (passed == NULL || failed == NULL || failed_count <= 0 || passed_count <= 0) {
        return NULL;
    }
    int total = passed_count + failed_count;
    Student_t14 **refs = malloc(sizeof(Student_t14 *) * total);
    if (refs == NULL) {
        return NULL;
    }
    int idx = 0;
    for (int i = 0; i < passed_count; i++) {
        refs[idx++] = (Student_t14 *) &passed[i];
    }
    for (int i = 0; i < failed_count; i++) {
        refs[idx++] = (Student_t14 *) &failed[i];
    }
    return refs;
}

void print_refs_t14(Student_t14 **refs, int n) {
    if (refs == NULL || n == 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d, %s, %d ", refs[i]->student_id, refs[i]->name, refs[i]->points);
    }
    printf("\n");
}

void free_refs_t14(Student_t14 *passed, Student_t14 *failed, Student_t14 **refs) {
    free(passed);
    free(failed);
    free(refs);
}
