#include <stdio.h>
int main(void)
{
char myName [20];
int Student_ID;
printf("What's your name?\n");
gets(myName);
printf("What's your ID?\n");
scanf("%i", &Student_ID);
printf("My name is: %s\n", myName);
printf("My Student ID is: %i\n", Student_ID);
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
return 0;
}
