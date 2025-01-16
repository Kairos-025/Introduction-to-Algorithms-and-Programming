#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    if (year % 100 == 0){
        printf("%d is a Century", year);
        if(year % 400 == 0){
            printf(" and also a Leap year.\n");
        }else{
            printf(" and not a Leap year.\n");
        }
    }else{
        if(year % 4 == 0){
            printf("%d is a Non-century and a Leap year.\n", year);
        }else{
            printf("%d is a Non-century and not a Leap year.\n", year);
        }
    }
    return 0;
}
