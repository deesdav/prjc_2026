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
        procvicovani/task1/main_task1.c
        procvicovani/task1/tools.h
        procvicovani/task1/tools.c
        procvicovani/task2/main_task2.c
        procvicovani/task2/functions.h
        procvicovani/task2/functions.c
        procvicovani/task3/main_task3.c
        procvicovani/task3/func.h
        procvicovani/task3/func.c
        procvicovani/task4/main_task4.c
        procvicovani/task5/main_task5.c
        procvicovani/task5/func_task5.h
        procvicovani/task5/func_task5.c
        procvicovani/task6/main_task6.c
        procvicovani/task6/func_task6.h
        procvicovani/task6/func_task6.c
)
