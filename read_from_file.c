#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100; // buffer shouls be larger than the longest line plus one character, if buffer is too small, only the beginning of the line of the line will be read
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) { //fgets is a function reads one line for every iteration of the loop, when no more content is left to be read, returns null 
        printf("%d\n", atoi(line_buffer)); // atoi - ask to integer
    }

    fclose(file);
    return 0;
}