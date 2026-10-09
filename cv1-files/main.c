/*
* #include <stdio.h>
#include <stdlib.h>

void read_text_and_write_binary() {
    FILE *txt_file = fopen("../files/data.txt", "r");
    FILE *bin_file = fopen("../files/data.bin", "wb");

    if (txt_file == NULL) {
        printf("Text file does not exist\n");
        exit(1);
    }
    if (bin_file == NULL) {
        printf("Binary file does not exist\n");
        fclose(txt_file);
        exit(1);
    }

    long timestamp;
    float value;
    char point_id;
    int error;

    while (fscanf(txt_file, "%ld;%f; %c;%d", &timestamp, &value, &point_id, &error) == 4) {
        fwrite(&timestamp, sizeof(long), 1, bin_file);
        fwrite(&value, sizeof(float), 1, bin_file);
        fwrite(&point_id, sizeof(char), 1, bin_file);
        fwrite(&error, sizeof(int), 1, bin_file);
        printf("%ld;%f;%c;%d\n", timestamp, value, point_id, error);
    }
    fclose(txt_file);
    fclose(bin_file);
}

void test_output() {
    FILE *bin_file = fopen("../files/data.bin", "rb");
    if (bin_file == NULL) {
        printf("Binary file does not exist");
        exit(1);
    }

    long timestamp;
    float value;
    char point_id;
    int error;
    int count = 0;


    while (fread(&timestamp, sizeof(long), 1, bin_file) == 1) {
        fread(&value, sizeof(float), 1, bin_file);
        fread(&point_id, sizeof(char), 1, bin_file);
        fread(&error, sizeof(int), 1, bin_file);
        printf("Test nacetl z binarky: %ld;%f;%c;%d\n", timestamp, value, point_id, error);
        count++;
    }
    printf("Nacteno celkem %d zaznamu z bin souboru.\n", count);
    fclose(bin_file);
}

int main() {
    read_text_and_write_binary();
    test_output();
    return 0;
}

 */