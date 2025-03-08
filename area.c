#include <stdio.h>
int computeArea(int length) {
    return length * length;
}

int main () {
    int length = 5;
    int area = computeArea(length);
    printf("The area of the square is : %d" , area);
}