#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 10;
    float *t ;
    t = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n ; i ++){
        t[i] = i + 0.1;
    }

    for (int j = 0 ; j < n ; j ++){
        printf("%.2f ", t[j]);
    }

    free(t);
    return 0;
}