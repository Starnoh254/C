#include <stdio.h>

int main (){
    int a = 0;

    while (a < 5)
    {
        printf("/");
        a++;
    }
    
    return 0; //return statement is not necessary here, but it's good practice to include one in case the function doesn't end properly for some reason
}