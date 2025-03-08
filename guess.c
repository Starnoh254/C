#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(0));

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    answer = (rand() % MAX) + MIN;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        guesses ++;

        if(guess < answer) {
            printf("Too low\n");
        }
        else if (guess > answer) {
            printf("Too high\n");
        }
        else{
            printf("Correct \n");
            printf("Guesses : %d" , guesses);
        }
        
    }
    while(guess != answer);


    return 0;
}