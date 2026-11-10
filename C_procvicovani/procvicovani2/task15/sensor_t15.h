#ifndef SENSOR_T15_H
#define SENSOR_T15_H

typedef struct {
    int id;
    float value;
} Sensor_t15;

Sensor_t15 *alloc_sensors_t15(int n, int min, int max);

Sensor_t15 **filter_negative_t15(Sensor_t15 *arr, int n, int *out_count);

void print_raw_bytes_t15(float val);

#endif //SENSOR_T15_H
