#include <stdio.h>
int main(void)
{
int num1;
int num2;
int sum;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
sum = num1 + num2;
printf("-----------------------------------------------------------------\n| \t \t \t \t \t \t \t \t|\n");
printf("|\t %20d", num1);
printf(" + %d", num2);
printf(" = %-20d \t|", sum);
printf("\n| \t \t \t \t \t \t \t \t|\n-----------------------------------------------------------------\n");
//printf("Sum of the entered numbers: %d", sum);
return 0;
}
