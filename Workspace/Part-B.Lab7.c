/* Ekemini John
16th March, 2023 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    //The user's input to guess the goal
    int guess;

    //The attempts used in guessing the goal
    int attempts = 0;

    //The goal also known as the random number
    int goal;

    srand(time(NULL));

    //The goal is in the range between 1 and 50
    goal = (rand() % 50) + 1;
    printf("%d", goal);

    do{
        printf("Enter your guess (between 1 and 50):\n");
        scanf("%d", &guess);

        if(guess > goal){
            printf("Too high!\n");

        }else if (guess < goal){
            printf("Too low!\n");

        }else{
            printf("Correct, the number is %d.\n", goal);

        }
        
        attempts++;
    }while((guess != goal) && (attempts != 10));

    //When attempts is 10 or greater
    if((attempts >= 10) && (guess != goal))
    printf("Sorry, the number is %d.\n", goal);

    return 0;
}