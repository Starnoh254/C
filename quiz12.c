#include <stdio.h>


void modifyArray(int arr[]){
    arr[0] = 10;
}

int main (){
    int nums[] = {1,2,3};
    modifyArray(nums);
    printf("%d" , nums[0]);
    return 0;
}