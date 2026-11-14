#include <stdio.h>
#include <stdlib.h>

char *alloc_arr_t16(int n) {
    if (n <= 0) return NULL;
    char *arr = (char *) malloc(n * sizeof(char));
    if (arr == NULL) return NULL;
    return arr;
}

char **split_t16(char *text, int n, char delimiter, int *out_count) {
    if (n <= 0 || text == NULL) return NULL;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (text[i] == delimiter) {
            count++;
        }
    }
    *out_count = count;
    if (count == 0) return NULL;
    char **words = (char **) malloc(count * sizeof(char *));
    if (words == NULL) {
        *out_count = 0;
        return NULL;
    }
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (text[i] == delimiter) {
            words[idx++] = text[i];
        }
    }
    return words;
}

void swap_t16(char **words, int count) {
    if (words == NULL || count <= 0) return;
    for (int i = 0; i < count; i++) {
        unsigned char *b = (unsigned char *) words[i];
        for (int j = 0; j < count / 2; j++) {
            char tmp = b[j];
            b[j] = b[j + 1];
            b[j + 1] = tmp;
        }
    }
}

void print_words_t16(char **words, int count) {
    if (words == NULL || count <= 0) return;
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    char *text = alloc_arr_t16(n);
    *text = "ab,cd";
    if (text == NULL) return 1;
    int count = 0;
    char delimiter = ',';
    char **words = split_t16(text, n, delimiter, &count);
    print_words_t16(words, count);
    swap_t16(words, count);
    print_words_t16(words, count);
    free(text);
    free(words);
    text = NULL;
    words = NULL;
    return 0;
}
