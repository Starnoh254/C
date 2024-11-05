#include <stdio.h>
#include <stdlib.h> // Needed for malloc and free

int main() {
    int *array;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory dynamically for an array of 'size' integers
    array = (int*) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the memory: initialize each element
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    // Print the values in the array
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the memory to prevent a memory leak
    free(array);

    return 0;
}
