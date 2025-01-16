/* Ekemini John
22nd March, 2023 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    float timeDifference;

    int b;
    srand(time(NULL));

    int n, a[n];
    printf("Enter value for n:\n");     //The user inputs the length.
    scanf("%d", &n);

    if (n > 20){
        n = 20;     //When the length that the user input is big then we stop at 20.
    }
    
    printf("\n");

    for (int i = 0; i < n; i++){
        a[i] = rand() % 2001 + -1000;       //Random numbers between -1000 and 1000.
        printf("a[%d] = %d\n", i, a[i]);        //Prints the array also known as before bubble sorting.
    }

    printf("\n");
    
    clock_t start = clock();        //Starts the timer.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n - 1); j++){
            if (a[j] > a[j+1]){
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;     //Swapping the arrays also known as Bubble sorting to get an ascending order.
            }
        }
    }
    clock_t stop = clock();     //Stops the timer.

    timeDifference = difftime(stop, start);     //Gets the time difference between the Start and the Stop.
    
    for (int i = 0; i < n; i++){
        printf("a[%d] = %d\n",  i, a[i]);       //Prints the array also known as after it's been bubble sorted.
    }
    
    printf("\nThe time difference is %.2f.", timeDifference);       //Prints the time difference.
    
    return 0;
}