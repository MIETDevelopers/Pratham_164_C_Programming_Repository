// Author - Pratham Tagotra.

#include<stdio.h>
#include<stdlib.h> 
#include<time.h> //I used it for generating random number.

int snakewatergun(char you, char computer){
/*
sw 1 // SIMPLE LOGIC.
ws -1
gs 1
sg -1
wg 1
gw -1

*/
    if(you==computer){ //If else statements acc to logic.
        return 0;
    }

    if(you =='s' && computer =='w'){
        return 1;
    }
    else if(you =='w' && computer =='s'){
        return -1;
    }
    if(you =='g' && computer =='s'){
        return 1;
    }
    else if(you =='s' && computer =='g'){
        return -1;
    }
    if(you =='w' && computer =='g'){
        return 1;
    }
    else if(you =='g' && computer =='w'){
        return -1;
    }
}

int main(){
    char you,computer;
    int num;
    srand(time(0)); //Random number generation.
    num = rand()%100+1; 

    if(num<33){
        computer = 's'; // Giving random character to computer from random numbers produced.
    }
    else if(num>33 && num<66){
        computer = 'w';
    }
    else{
        computer = 'g';
    }

    printf("Enter 's' for snake 'w' for water 'g' for gun\n"); //User will enter it's choice.
    scanf("%c",&you);

    int result = snakewatergun(you,computer); //Calling above function.

    printf("You chose %c and computer chose %c\n",you,computer); //You can comment out this line if you want to.

    if(result == 0){
        printf("MATCH DRAW!\n");
    }
    else if(result == 1){
        printf("YOU WIN!\n");
    }
    else{
        printf("YOU LOSE!\n");
    }

    return 0;

    // ENJOY!!
    //Similarly you can make stone paper scissors game.
}