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
int sum, sub, mul, div;
printf("Enter first number: ");
scanf("%i", &num1);
printf("Enter second number: ");
scanf("%i", &num2);
sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1/num2;
printf("\n-----------------------------------------------------------------\n| \t \t \t \t \t \t \t \t|\n");
printf("|\t %20d = %i + %-20i \t|\n", sum, num1, num2);
printf("|\t %20d = %i - %-20i \t|\n", sub, num1, num2);
printf("|\t %20d = %i * %-20i \t|\n", mul, num1, num2);
printf("|\t %20d = %i / %-20i \t|\n", div, num1, num2);
printf("| \t \t \t \t \t \t \t \t|\n-----------------------------------------------------------------\n");
return 0;
}
