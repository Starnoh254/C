#include <stdio.h>

int main (){
    int values[] = {2,4,6,8,10};
    int *ptr = values + 2;
    printf("%d\n" , *ptr);
    
    return 0;
}