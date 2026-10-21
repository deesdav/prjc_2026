#ifndef PRJC_2026_TOOLS_H
#define PRJC_2026_TOOLS_H

double *alloc_arr(int n);

void fill_arr(int n, double *arr);

int *create_int_arr(double *double_arr, int index);

void print_double_arr(int n, double *arr);

void print_int_arr(int n, int *arr);

int test_int_arr(double *double_pole, int index, int *int_pole);

#endif //PRJC_2026_TOOLS_H
