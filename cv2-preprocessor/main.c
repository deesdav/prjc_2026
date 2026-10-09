#include <stdio.h>
#include "config.h"
#include "unit.h"
#include "stats.h"

static float convert(float celsius) {
#if OUTPUT_UNIT == UNIT_F
    return celsius_to_fahrenheit(celsius);
#elif OUTPUT_UNIT == UNIT_K
    return celsius_to_kelvin(celsius);
#else
    return celsius;
#endif
}

int main(void) {
    float temperature;

    printf("Enter temperatures: ");

    while (scanf("%f", &temperature) == 1) {
        if (IN_RANGE(temperature, MIN_TEMP, MAX_TEMP)) {
            add_temperature(temperature);
        } else {
            printf("Temperature out of range: %.2f\n", temperature);
        }
    }

    if (get_counter() > 0) {
        printf("\n=== TEMPERATURE STATS ===\n");
        printf("Valid measurements: %d\n", get_counter());
        printf("Minimum temperature: %.2f %s\n", convert(get_minimum()), UNIT_LABEL);
        printf("Maximum temperature: %.2f %s\n", convert(get_maximum()), UNIT_LABEL);
        printf("Average temperature: %.2f %s\n", convert(calculate_average()), UNIT_LABEL);
    } else {
        printf("No valid measurements were entered.\n");
    }

    return 0;
}
