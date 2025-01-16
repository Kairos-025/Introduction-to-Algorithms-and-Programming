/* Ekemini John
22nd March, 2023 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int a[30], num, tally = 0;

    printf("\n");

    for (int x = 0; x < 30; x++){
        a[x] = rand() % 21;     //Random numbers between the range of 0 and 20.
        printf("%d  ", a[x]);       //Prints 30 random numbers.
    }

    printf("\n");
    
    //The user enters a number to get its frequency.
    puts("\nEnter an integer number: ");
    scanf("%d", &num);

    for (int x = 0; x < 30; x++){
        if (a[x] == num){
            tally += 1;     //Counts the frequency of that number gotten from the user.
        }
    }
    
    printf("\nThe frequency of the number %d is %d.", num, tally);      //Prints the frequency of that number.
    
    return 0;
}   