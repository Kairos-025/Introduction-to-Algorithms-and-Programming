#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1428571429

float areaOfCircle(float r);
    
int main(){   
    float a;
    float sa;
    printf("Enter the radius:\n");
    scanf("%f", &a);
    sa = areaOfCircle(a);
    printf("The area of a circle is %.2f.", sa);
}

float areaOfCircle(float r){
    float a;
    a = pi * pow(r, 2);
    return a;
}