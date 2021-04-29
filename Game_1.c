#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, noofguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;//It will generate a random number between 1 and 100.
    printf("The number is %d\n", number);

    do{
        printf("Guess a number between 1 and 100\n");
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
        noofguess++;
    }while(guess != guess);

    return 0;
}