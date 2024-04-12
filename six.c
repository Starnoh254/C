#include <stdio.h>

int main (){

    int a = 10 ;
    int b = 20 ; 

    int *ptr = &a; // pointer to variable 'a'
    ptr = &b;

    printf("%d\n" , *ptr);
    
    return 0;
}