#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;
    printf("ISBN to be checked:\n");
    scanf("%6d%6d", &num1, &num2);
    int check = 0;

    for(int num = 1; num < 12; num++){

        if(num % 2 == 1){
            check = (check + (num1 * 3) + (num2 * 3));
            num1 = num1 / 100;
            num2 = num2 / 100;
        }else{
            check = (check + (num1 * 1) + (num2 * 1));
        }
    }
    check = (10 - (check % 10));
    printf("Check digit is %d.\n", check);
    
    return 0;
}

