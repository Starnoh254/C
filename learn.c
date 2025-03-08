#include <stdio.h>

int main () {
    // I want to learn about pointers 
    // to declare pointers we use "*" symbol

    int x = 10;
    int *ptr = &x; // Declares a pointer to an integer

    // I want to print the memory address of x
    printf("%p is the memory address of x variable\n", (void*)&x);

    // I want to print the value of x 
    printf("%d is the value of x variable \n", *ptr);

    // changing the value of x using ptr 
    *ptr = 20; // sets x to 20 via the pointer 

    printf("%d is the new value of x variable after change \n" , x);
    printf("%d is the memory address of x variable \n" , &x);
    return 0;
}