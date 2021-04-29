#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, noofguess = 1; //Declearing variables.
    srand(time(0));
    number = rand() % 100 + 1;//It will generate a random number between 1 and 100.
    //printf("The number is %d\n", number); I have commented it out because then the user or the player would already know what the number is.

    do{ // I have used do while loop because atleast we have to give one chance to the user/player.
        printf("\nGuess a number between 1 and 100\n");
        scanf("%d", &guess);
        
        if(guess>number){
            printf("Lower no please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You have guessed it in %d guesses\n", noofguess);
        }
        noofguess++; //Number of guesses will increase with each iteration.
    }while(guess != number); //Condition.

    return 0;
}