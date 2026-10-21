cmake_minimum_required(VERSION 4.3)
project(prjc_2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(prjc_2026 cv1-files/main_files.c
        cv2-preprocessor/main_preprocessor.c
        cv2-preprocessor/unit.c
        cv2-preprocessor/unit.h
        cv2-preprocessor/stats.c
        cv2-preprocessor/stats.h
        cv2-preprocessor/config.h
        cv3-pointers/main_pointers.c
        cv3-pointers/functions.h
        cv3-pointers/functions.c
        cv4-dynamic-alloc/main.c
        cv4-dynamic-alloc/tools.h
        cv4-dynamic-alloc/tools.c
)
