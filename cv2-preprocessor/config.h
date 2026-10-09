#ifndef PRJC_2026_CONGIF_H
#define PRJC_2026_CONGIF_H

#define MIN_TEMP -90.0f
#define MAX_TEMP 60.0f

#define IN_RANGE(x, min, max) (((x) >= (min)) && ((x) <= (max)))

#define UNIT_C 1
#define UNIT_F 2
#define UNIT_K 3

#ifndef OUTPUT_UNIT
#define OUTPUT_UNIT UNIT_C
#endif

#if OUTPUT_UNIT == UNIT_C
    #define UNIT_LABEL "C"
#elif OUTPUT_UNIT == UNIT_F
    #define UNIT_LABEL "F"
#elif OUTPUT_UNIT == UNIT_K
    #define UNIT_LABEL "K"
#else
    #error Unsupported output unit
#endif

#endif //PRJC_2026_CONGIF_H
