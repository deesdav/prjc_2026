#include <stdio.h>
#include <stdlib.h>
#include "sensor_t15.h"

Sensor_t15 *alloc_sensors_t15(int n, int min, int max) {
    if (n <= 0) return NULL;
    Sensor_t15 *sensors = (Sensor_t15 *) malloc(sizeof(Sensor_t15) * n);
    if (sensors == NULL) return NULL;
    for (int i = 0; i < n; i++) {
        sensors[i].id = i + 1;
        sensors[i].value = (float) (min + rand() % (max - min + 1));
    }
    return sensors;
}

Sensor_t15 **filter_negative_t15(Sensor_t15 *arr, int n, int *out_count) {
    if (n <= 0 || arr == NULL || out_count == NULL) return NULL;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].value < 0.0f) {
            count++;
        }
    }
    *out_count = count;
    if (count == 0) return NULL;
    Sensor_t15 **negatives = (Sensor_t15 **) malloc(count * sizeof(Sensor_t15 *));
    if (negatives == NULL) {
        *out_count = 0;
        return NULL;
    }
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].value < 0.0f) {
            negatives[idx++] = (Sensor_t15 *) &arr[i];
        }
    }
    return negatives;
}

void print_raw_bytes_t15(float val) {
    unsigned char *bytes = (unsigned char *) &val;
    for (int i = 0; i < sizeof(float); i++) {
        printf("%02X ", *(bytes + i));
    }
    printf("\n");
}
