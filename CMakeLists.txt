cmake_minimum_required(VERSION 4.3)
project(prjc_2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(prjc_2026 cv1-files/main.c
        cv2-preprocessor/main.c
        cv2-preprocessor/unit.c
        cv2-preprocessor/unit.h
        cv2-preprocessor/stats.c
        cv2-preprocessor/stats.h
        cv2-preprocessor/config.h)
