//Create a file that creates a file squares.dat and writes to it all the squares of positive integers from 1 to n, where is an integer provided as input by the user.

#include <stdio.h>
#include "utils.h"

int main () {
    char filename[] = "squares.dat"
    FILE *file fopen(filename, "w");

    int num;

    printf("Input the value of n\n", num);
    scanf("&d", &num);

    while int < num







    fclose(file);
    return 0;
}
