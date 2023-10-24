#include <stdio.h>
#include "utils.h"

//task - just changed the write to file.c to use header file

int main () {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "w");

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;
}