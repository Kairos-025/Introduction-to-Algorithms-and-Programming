#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;
    printf("ISBN to be checked:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);
    int check = 0;
    int sum = 0;
    sum = num1*1 + num2*3 + num3*1 + num4*3 + num5*1 + num6*3 + num7*1 + num8*3 + num9*1 + num10*3 + num11*1 + num12*3;
    check = (10 - (sum % 10));
    printf("Check digit is %d.\n", check);
    return 0;
}

