#include <stdio.h>
//How to open/create a new file.
int main () {
    char filename [] = "data.txt";
    FILE *file = fopen (filename, "w"); // w stands for writing,or "a", "w+", "a+"
    if (file == NULL) {
        perror("");
        return 1;
    }

    fclose(file); //closes the file
    return 0;
}
