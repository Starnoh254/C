#include <stdio.h>

int main () {
    FILE *file = fopen("new.txt","r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    printf("File opened succesfully\n");
    fclose(file);
    return 0;
}