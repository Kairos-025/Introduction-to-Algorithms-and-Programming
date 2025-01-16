#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myName [20];
    printf("Enter your name:\n");
    gets(myName);
    printf("*\n"
           " **\n"
           " ***\n");
    printf("  My name is %s.", &myName);
    printf("\n  ***\n"
           " **\n"
           "*");
    return 0;
}
