#include <stdio.h>
#include <stdlib.h>
#include "sensor_t15.h"

int main() {
    int n = 7;
    Sensor_t15 *arr = alloc_sensors_t15(n, -50, 50);
    int count = 0;
    Sensor_t15 **negatives = filter_negative_t15(arr, n, &count);
    for (int i = 0; i < count; i++) {
        print_raw_bytes_t15(negatives[i]->value);
    }
    free(arr);
    free(negatives);
    arr = NULL;
    negatives = NULL;
    return 0;
}
