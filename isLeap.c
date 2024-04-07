#include <stdio.h>

// program to find if the given year is leap or not
int main ()
{
    int year ;
    printf("Enter a year : ");
    scanf("%d" , &year);

    if ( year % 4 == 0){
        if ( year % 100 == 0){
            if (year % 400 == 0){
                printf("The year entered , %d , is leap" , year);
            }
            else {
                printf("The year entered , %d , is not leap" , year);
            }
        }else {
            printf("The year entered , %d , is leap" , year);
        }

    }else {
        printf("The year entered , %d , is not leap" , year);
    }

    return 0 ;
}