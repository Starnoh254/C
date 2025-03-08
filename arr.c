#include <stdio.h>

int main () {
    int arr[] = {10,20,30,40};
    int *ptr = arr; // points to the start of the array

    // traverse the array using pointer arithmetic
    for(int i = 0; i < 4 ; i ++) {
        printf("Element %d : %d\n", i , *(ptr + i));
    }

    // Prints the total size of arr in bytes
    printf("Size of arr: %zu bytes\n", sizeof(arr)); // Should output 20 if int is 4 bytes
    return 0;
}