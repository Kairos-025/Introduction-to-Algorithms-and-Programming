#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myName [20];
    char my_field_of_study [20];
    printf("Enter your name: \n");
    gets(myName);
    printf("Enter your field of study: \n");
    gets(my_field_of_study);
    printf("Hello!");
    printf("\nMy name is: ** %s **", myName);
    printf("\nField of Study: \" %s \"", my_field_of_study);
    printf("\nThanks :)");
    return 0;
}
