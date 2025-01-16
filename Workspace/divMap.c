#include <stdio.h>

// div_mapping(n) returns the number of steps it takes to reach 0 by 
// by repeatedly dividing by 2; outputs to the screen the remainders 
// (mod2) of the numbers that result followed by 'end' 
// requires: 0 <= n
int div_mapping(int n);

int main(){
    int num, steps = 0;
    if(scanf("%d", &num) != 1){
        printf("Error: Invalid integer\n");
    }else if(num < 0){
        printf("Error: Invalid integer\n");
    }else{
      steps = div_mapping(num);
      printf("%d\n", steps);
    }
    return 0;
}

int div_mapping(int n){
    int steps = 0;
    while(n > 0){
        printf("%d ", n % 2);
        n /= 2;
        steps++;
    }
    printf("end");
    printf(" ");
    return steps;
}