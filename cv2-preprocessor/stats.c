#include "stats.h"

static int counter = 0;
static float total = 0.0f;
static float min_val = 0.0f;
static float max_val = 0.0f;

void add_temperature(float temp) {
    if (counter == 0) {
        min_val = temp;
        max_val = temp;
    } else {
        if (min_val > temp) min_val = temp;
        if (max_val < temp) max_val = temp;
    }
    total += temp;
    counter++;
}

float get_maximum(void) {
    return max_val;
}

float get_minimum(void) {
    return min_val;
}

float calculate_average(void) {
    if (counter == 0) {
        return 0.0f;
    }
    return total / counter;
}

int get_counter(void) {
    return counter;
}
