#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;

    printf("The memory address is , %d , while the value is %d \n", ptr, x);
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr2 = arr;
    // ptr2++; // Moves the pointer to the next integer in the array
    printf("%d" , ptr2);

    return 0;
}