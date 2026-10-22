#include <stdio.h>
#include <stdlib.h>
#include "tools_task7.h"

int main() {
    int *nums = alloc_array(5 * sizeof(int));

    fill_array(nums, 5);
    print_array(nums, 5);
    free(nums);
    nums = NULL;
    return 0;
}
