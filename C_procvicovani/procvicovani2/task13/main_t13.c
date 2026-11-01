    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    char *alloc_and_fill_t13(int N) {
        if (N <= 0) return NULL;
        char *arr = (char *) malloc(N * sizeof(char));
        if (arr == NULL) return NULL;
        for (int i = 0; i < N; i++) {
            arr[i] = (char) ('A' + rand() % 26);
        }
        return arr;
    }

    int print_masked_t13(const char *arr, int N, const char *mask) {
        if (N <= 0 || arr == NULL || mask == NULL) return -1;
        for (int i = 0; i < N; i++) {
            if (strchr(mask, arr[i]) != NULL) {
                printf("%c ", 'X');
            } else {
                printf("%c ", arr[i]);
            }
        }
        printf("\n");
        return 0;
    }

    int main() {
        int N = 12;
        char *arr = alloc_and_fill_t13(N);
        printf("Unmasked arr: ");
        for (int i = 0; i < N; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
        const char *mask = "A";
        printf("Masked arr 1 with %s: ", mask);
        print_masked_t13(arr, N, mask);
        mask = "ABCDE";
        printf("Masked arr 2 with %s: ", mask);
        print_masked_t13(arr, N, mask);
        free(arr);
        arr = NULL;
        return 0;
    }
