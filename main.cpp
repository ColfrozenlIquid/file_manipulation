#include <stdlib.h>
#include <stdio.h>

#include "class1.hpp"

#define FILE_PATH "sample_text.txt"

FILE* open_File(FILE* file); 
void close_File(FILE* file);

int main() {
    FILE* file = NULL;
    file = open_File(file);
    close_File(file);

    Class1 class1;

    return 0;
}

FILE* open_File(FILE* file) {
    char file_mode[2] = "r";    //Read mode
    if((file = fopen(FILE_PATH, file_mode)) == NULL) {
        printf("Failed to open file in : %s\n", FILE_PATH);
        exit(1);
    }
    printf("Successfully opened file %s\n", FILE_PATH);
    return file;
}

void close_File(FILE* file) {
    if (fclose(file) == 0) {
        printf("Successfully closed file: %s\n", FILE_PATH);
    }
    else {
        printf("Failed to close file: %s\n", FILE_PATH);
        exit(1);
    }
}