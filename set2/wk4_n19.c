#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*
    Write a program to play a number guessing game with a user.
    You can generate a random integer between 1 and 100 with the following lines of code:

    #include <stdlib.h>
    #include <time.h>

    ...

    int number;
    srand ((unsigned) time(NULL));
    number = rand()%100+1;

    Then write the code to play the following game:

        Guess a number (1-100) :: 50
        Higher than 50; guess again :: 75
        Lower than 75; guess again :: 65
        Higher than 65; guess again :: 70
        Higher than 70; guess again :: 73
        Good guess - you win!

    where you check that each entry is between 1 and 100. Once that’s working, you may want to
    consider adding messages that tell a user when they’re not playing the game logically; for example:

    Guess a number (1-100) :: 50
    Higher than 50; guess again :: 75
    Lower than 75; guess again :: 45
    THINK! - I already told you that the number is > 50
    Try again :: 65
    ...
    */

    int number, guess, down=0, up=100;
    srand((unsigned)time(NULL));
    number = rand()%100+1;

    printf("Guess a number (1-100) :: ");

    int done = 0;
    do {

        scanf("%d",&guess);
        if (guess<1 || guess>100){
            printf("\nERROR: Out of bounds");
            printf("\nGuess a number (1-100) :: ");
        } else {

            if (guess==number){
                printf("\nGood guess - you win!");
                done = !done;
            } else if (guess <= down){
                printf("\nTHINK! - I already told you that the number is > %d", guess);
                printf("\nGuess a number (1-100) :: ");
            } else if (guess >= up){
                printf("\nTHINK! - I already told you that the number is < %d", guess);
                printf("\nGuess a number (1-100) :: ");
            } else if (guess > number){
                printf("\nLower than %d; guess again :: ", guess);
                up = guess;
            } else {
                printf("\nHigher than %d; guess again :: ", guess);
                down = guess;
            }

        }

    } while(!done);
    return 0;
}
