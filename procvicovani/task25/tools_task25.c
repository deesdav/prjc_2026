#include "tools_task25.h"
#include <stdio.h>
#include <stdlib.h>

int split_array_task25(const int *array, int n, int **out_positives, int *out_pos_count, int **out_negatives,
                       int *out_neg_count) {
    if (n <= 0 || array == NULL || out_positives == NULL || out_pos_count == NULL || out_negatives == NULL ||
        out_neg_count == NULL) {
        return -1;
    }
    *out_positives = NULL;
    *out_negatives = NULL;
    *out_pos_count = 0;
    *out_neg_count = 0;

    int pos_count = 0;
    int neg_count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            pos_count++;
        } else if (array[i] < 0) {
            neg_count++;
        }
    }
    int *pos_array = NULL;
    if (pos_count > 0) {
        pos_array = (int *) malloc(pos_count * sizeof(int));
        if (pos_array == NULL) {
            return -1;
        }
    }
    int *neg_array = NULL;
    if (neg_count > 0) {
        neg_array = (int *) malloc(neg_count * sizeof(int));
        if (neg_array == NULL) {
            free(pos_array);
            return -1;
        }
    }

    int pos_idx = 0;
    int neg_idx = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            pos_array[pos_idx++] = array[i];
        } else if (array[i] < 0) {
            neg_array[neg_idx++] = array[i];
        }
    }
    *out_positives = pos_array;
    *out_pos_count = pos_count;

    *out_negatives = neg_array;
    *out_neg_count = neg_count;

    return 0;
}
