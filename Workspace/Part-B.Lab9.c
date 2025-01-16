#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factorial(int num);

int main(){
    int a;
    long long result;
    printf("Enter a positive integer:\n");
    scanf("%d", &a);
        result = factorial(a);
    if(a >= 0){
        printf("%d! = %lld.", a, result);
    }else{
        puts("Syntax Error!");
    }
}

long long factorial(int num){
    long long fact = 1;
    if(num <= 0){
        if(num == 0){
            fact = 1;
        }else{
            return 0;
        }
    }else{
        for(int a = num; a > 0; a--){
            fact = fact * num;
            num = num - 1;
        }
    }
    return fact;
}