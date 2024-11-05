#include <stdio.h>
#include <stdlib.h>

void createMemoryLeak() {
    int *leakedMemory = (int*) malloc(5 * sizeof(int));

    // We use the memory here (e.g., assign values)
    for (int i = 0; i < 5; i++) {
        leakedMemory[i] = i;
    }

    // No 'free(leakedMemory);' - This memory will not be released, causing a leak.
}

int main() {
    createMemoryLeak();

    printf("Memory leak demo completed.\n");
    return 0;
}
