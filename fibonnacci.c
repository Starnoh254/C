#include <stdio.h>
// code to generate the fibonacci series
void print_fib(int n);

int main()
{
    int numb;
    printf("Enter the number of fib elements you want : ");
    scanf("%d", &numb);
    print_fib(numb);
    return 0;
}

void print_fib(int n)
{
    const int size = n;
    int base[size];
    base[0] = 1;
    base[1] = 1;

    printf("Fibonacci Series: ");
    printf("%d %d ", base[0], base[1]);
    for (int i = 2; i < size; i++)
    {
        base[i] = base[i - 1] + base[i - 2];
        printf("%d " , base[i]);
    }
}
