//Number Guessing Game: Write a program where the computer randomly generates a number between 1 and 100, and the user has to guess the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess = 0;
    int count = 0;
    while(guess!= number){
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        count++;
    }
    printf("You got it in %d tries!\n", count);

        return 0;
}
