#include <stdio.h>
#include <string.h>

struct Player
{
    char name[32];
    int score ;
};
int main()
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John Doe");
    player1.score = 50;

    strcpy(player2.name, "Jane Smith");
    player2.score = 20;

    printf("%s \n" , player1.name);
    printf("Score: %d\n", player1.score);

    printf("%s \n" , player2.name);
    printf("Score: %d\n", player2.score);
    
    return 0;
}