#include <stdio.h>

int main () {

    // Learning about memory 
    char a = 'x';
    char b = 'y';
    char c = 'z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n" , &a);
    printf("%p\n" , &b);
    printf("%p\n" , &c);

    return 0;
}