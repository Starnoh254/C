#include <stdio.h>
#include <stdbool.h>
#include <math.h>


// Function to check if a number is prime
bool is_prime(int n) {
    // Step 1: Handle special cases
    if (n <= 1) {
        return false;
    }

    // Step 2: Check divisibility from 2 up to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {  // If n is divisible by i, it's not prime
            return false;
        }
    }

    // If no divisors were found, n is prime
    return true;
}

int main () {
    int number = 20001;

    // Call the is_prime function and store the result
    bool result = is_prime(number);

    // Print the result based on whether the number is prime
    if (result) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

