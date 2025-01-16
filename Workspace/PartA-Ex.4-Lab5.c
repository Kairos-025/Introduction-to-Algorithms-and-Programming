#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter the first number:\n");
    scanf("%d", &num1);

    printf("Enter the second number:\n");
    scanf("%d", &num2);

    printf("Enter the third number:\n");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)){
        printf("%d is the largest number.\n", num1);
        }else if((num2 > num1) && (num2 > num3)){
            printf("%d is the largest number.\n", num2);
            }else{
                printf("%d is the largest number.\n", num3);
            }

    if ((num1 < num2) && (num1 < num3)){
        printf("%d is the smallest number.\n", num1);
        }else if((num2 < num1) && (num2 < num3)){
            printf("%d is the smallest number.\n", num2);
            }else{
                printf("%d is the smallest number.\n", num3);
            }
    return 0;
}
