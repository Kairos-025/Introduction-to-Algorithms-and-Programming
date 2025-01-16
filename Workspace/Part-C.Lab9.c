#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long binary(int number);

int main(){
    int b;
    long long result;
    printf("Enter a positive integer:\n");
    scanf("%d", &b);
    result = binary(b);
    printf("The binary of %d is %lld.", b, result);
}

long long binary(int number){
    long long add = 0;
    long long bin = 0;
    int b = 0;
    if(number == 0){
        add = 0;
    }else{
        while(number != 0){
            if(number % 2 == 1){
                add = (add * 10) + (number % 2);
                b++;
            }else{
                add = (add * 10) + (number % 2);
                b++;
            }
            number = number / 2;
        }
        for(int c = 0; c < b; c++){
            bin = (bin * 10) + (add % 10);
            add = add / 10;
        }
    }
    return bin;
}