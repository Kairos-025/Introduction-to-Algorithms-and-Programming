#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int rem;
    printf("Please enter two values:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    rem = num1 % num2;
    printf("Remainder of %d divide by %d is %d\n", num1, num2, rem);
    return 0;
}
