#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char opt, opt1;
	printf("Welcome to my Command-Line Calculator (CLC)\n"      //shows a welcome message to the user.
	"Developer: Ekemini Aniekan John\n"
	"Version: 2\n"
	"Date: Monday 27th March, 2023\n"
	"Select one of the following items:\n"
	"B) - Binary Mathematical Operations, such as addition and subtraction.\n"
	"U) - Unary Mathematical Operations, such as square root, and log.\n"
	"A) - Advances Mathematical Operations, using variables, arrays.\n"
	"V) - Define variables and assign them values.\n"
	"E) - Exit\n");     //shows a prompt for the user selection.

    puts("");

    while((opt != 'E') && (opt != 'e')){
        scanf("%c", &opt);
        float x, y, result, num;
        char calc1, calc2;
        char alpha, var;
        int del, logic = 0, select = 0;
        
        while((opt != 'B') && (opt != 'b') && (opt != 'U') && (opt != 'u') && (opt != 'A') && (opt != 'a') && (opt != 'V') && (opt != 'v') && (opt != 'E') && (opt != 'e')){
            scanf("%[^\n]s", &del);     //discards the scanned value.
            puts("Not the operation listed above. Enter the correct operation:");       //shows the user the operations and asks the user to enter an operation.
            getchar();
            scanf("%c", &opt);
        }
        switch(opt){
                case 'B':
                case 'b':
                
                    printf("Please enter the first number:\n");     //asks the user to enter first number.
                    while(!logic){
                        if(scanf("%f", &x)){
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            logic = 1;
                        }else{
                            puts("Error, please enter a number: ");        //prints an invalid error message to the user.
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                        }
                    }
                        logic = 0;

                    printf("Please enter the operation (+, -, *, /, %%, P, X, I):\n");      //shows the user the operations and asks the user to enter an operation.
                    getchar();
                    scanf("%c", &calc1);
                    while ((calc1 != '+') && (calc1 != '-') && (calc1 != '*') && (calc1 != '/') && (calc1 != '%') && ((calc1 != 'P') && (calc1 != 'p')) && ((calc1 != 'X') && (calc1 != 'x')) && ((calc1 != 'I') && (calc1 != 'i'))){
                        printf("Not the operation listed above\n");       //prints an invalid error message to the user.
                        printf("Please enter the operation (+, -, *, /, %%, P, X, I):\n");      //shows the user the operations and asks the user to enter an operation.
                        getchar();
                        scanf("%c", &calc1);
                    }

                    printf("Please enter the second number:\n");        //asks the user to enter second number.
                    while(!logic){
                        if(scanf("%f", &y)){
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            logic = 1;
                        }else{
                            puts("Error, please enter a number: ");        //prints an invalid error message to the user.
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                        }
                    }
                        logic = 0;

                    switch(calc1){
                        case '+':
                            result = x + y;     //executes the operation.
                            printf("The result is %.2f.\n", result);        //prints the result.
                            break;

                        case '-':
                            result = x - y;     //executes the operation.
                            printf("The result is %.2f.\n", result);        //prints the result.
                            break;

                        case '*':
                            result = x * y;     //executes the operation.
                            printf("The result is %.2f.\n", result);        //prints the result.
                            break;

                        case '/':
                            if (y != 0){
                                result = x / y;     //executes the operation.
                                printf("The result is %.2f.\n", result);        //prints the result.
                            }else{
                                printf("Syntax Error!!!\n");
                            }
                            break;

                        case '%':
                            if (y != 0){
                                result = (int)x % (int)y;       //executes the operation.
                                printf("The result is %.0f.\n", result);        //prints the result.
                            }else{
                                printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                            }
                            break;

                        case 'P':
                        case 'p':
                            result = pow (x, y);        //executes the operation.
                            printf("The result is %.2f.\n", result);        //prints the result.
                            break;

                        case 'X':
                        case 'x':
                            if (x > y){
                                printf("The result is %.2f.\n", x);     //prints first number if it's greater than second number.
                            }else{
                                printf("The result is %.2f.\n", y);     //prints second number if it's greater than first number.
                            }
                            break;

                        case 'I':
                        case 'i':
                            if (x < y){
                                printf("The result is %.2f.\n", x);     //prints first number if it's less than second number.
                            }else{
                                printf("The result is %.2f.\n", y);     //prints second number if it's less than first number.
                            }
                            break;
                    }
                    printf("Please select your option (B, U, A, V, E):\n");     //shows the user the operations and asks the user to enter operation.
                    scanf("%c", &opt);
                    break;

            
                case 'U':
                case 'u':

                    printf("Please enter the operation (S, L, E, C, F):\n");        //shows the user the operations and asks the user to enter operation.
                    getchar();
                    scanf("%c", &calc2);
                    getchar();
                    while (((calc2 != 'S') && (calc2 != 's')) && ((calc2 != 'L') && (calc2 != 'l')) && ((calc2 != 'E') && (calc2 != 'e')) && ((calc2 != 'C') && (calc2 != 'c')) && ((calc2 != 'F') && (calc2 != 'f'))){
                        printf("Not the operation listed above\n\n");       //prints an invalid error message to the user.
                        printf("Please enter the operation (S, L, E, C, F):\n");        //shows the user the operations and asks the user to enter operation.                  
                        getchar();
                        scanf("%c", &calc2);
                        getchar();
                    }

                    printf("Please enter the number:\n");       //asks the user to enters the number.
                    while(!logic){
                        if(scanf("%f", &x)){
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            logic = 1;
                        }else{
                            puts("Error, please enter a number: ");        //prints an invalid error message to the user.
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                        }
                    }
                        logic = 0;

                    switch(calc2){
                        case 'S':
                        case 's':
                            while (x < 0){
                                printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                printf("Please enter the number:\n");       //asks the user to enter the number.
                                scanf("%f", &x);
                            }
                            result = sqrt (x);      //executes the operation.
                            printf("The result is %.2f.\n", result);        //prints the result.
                            break;

                        case 'L':
                        case 'l':
                            while (x < 0){
                                printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                printf("Please enter the number:\n");       //asks the user to enter the number
                                scanf("%f", &x);
                            }

                            printf("Enter: \n1. log(x) \n2. ln(x)\n");      //shows the user the operations and asks the user to enter an operation.
                            scanf("%d", &select);
                            while((select != 1) && (select != 2)){      //loop to check whether the number entered is the correct input.
                                scanf("%[^\n]s", &del);     //discards the scanned value.
                                printf("Not the operation listed above\n\n");       //prints an invalid error message to the user.
                                printf("Enter: \n1. log(x) \n2. ln(x)\n");      //shows the user the operations and asks the user to enter operation.
                                scanf("%d", &select);
                            }
                        
                            if (select == 1){
                                result = log10 (x);       //executes the operation.
                            }else{
                                result = log (x);        //executes the operation.
                            }
                            printf("The result is %.4f.\n", result);        //prints the result
                            break;

                        case 'E':
                        case 'e':
                            result = exp (x);       //executes the operation.
                            printf("The result is %.4f.\n", result);        //prints the result.
                            break;

                        case 'C':
                        case 'c':
                            result = ceil (x);      //executes the operation.
                            printf("The result is %.0f.\n", result);        //prints the result.
                            break;

                        case 'F':
                        case 'f':
                            result = floor (x);     //executes the operation.
                            printf("The result is %.0f.\n", result);        //prints the result.
                            break;
                    }
                    printf("Please select your option (B, U, A, V, E):\n");     //shows the user the operations and asks the user to enter operation.
                    scanf("%c", &opt);
                    break;

            
                case 'V':
                case 'v':

                    puts("Enter a variable (a, b, c, d, e):");       //asks the user to enter a variable between a to e.
                    getchar();
                    scanf("%c", &alpha);  
                    
                    if ((alpha >= 'a') && (alpha <= 'e')){
                        puts("Enter a number for the variable:");        //asks the user to enter a number for the variable.
                        while(logic == 0){      //loop to check whether the number entered is the correct input.
                            logic = scanf("%f", &num);
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            if(logic == 0){
                                puts("Error, Please enter a number: ");        //prints an invalid error message to the user.
                            }
                        }
                    }else{
                        while((alpha < 'a') || (alpha > 'e')){      //loop to check whether the character is with in the required range of character.
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            puts("Error, please enter a variable: ");        //prints an invalid error message to the user.
                            scanf(" %c", &alpha);
                        }
                        puts("Enter a number for the variable:");        //asks the user to enter a number for the variable.
                        while(logic == 0){      //loop to check whether the number entered is the correct input.
                            logic = scanf("%f", &num);
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            if(logic == 0){
                                puts("Error, Please enter a number: ");        //prints an invalid error message to the user.
                            }
                        }
                    }
                    printf("Please select your option (B, U, A, V, E):\n");     //shows the user the operations and asks the user to enter operation.
                    scanf("%c", &opt);
                    break;


                case 'A':
                case 'a':

                    printf("Please select your option (B, U, E):\n");       //shows the user the operations and asks the user to enter operation.
                    scanf("%c", &opt1);

                    while((opt1 != 'E')&&(opt1 != 'e')){
                        scanf("%c", &opt1);

                        while((opt1 != 'B') && (opt1 != 'b') && (opt1 != 'U') && (opt1 != 'u') && (opt1 != 'E') && (opt1 != 'e')){
                            scanf("%[^\n]s", &del);     //discards the scanned value.
                            puts("Not the operation listed above. Enter the correct operation:");       //shows the user the operations and asks the user to enter an operation.
                            getchar();
                            scanf("%c", &opt1);
                        }
                        switch(opt1){
                            case 'B':
                            case 'b':                                
                            
                                printf("Please enter the first number or (a, b, c, d, e):\n");      //asks the user to enter a number or any variable within (a, b, c, d, e).
                                while(!logic){
                                    if(scanf("%f", &x)){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        logic = 1;
                                    }else if ((scanf("%c", &var) == 1) && (var >= 'a') && (var <= 'e')){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        if(var == alpha){
                                            x = num;
                                        }else{
                                            x = 0;
                                        }
                                        logic = 1;
                                    }else{
                                        puts("Error, please enter a valid input: ");        //prints an invalid error message to the user.
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                    }
                                }
                                logic = 0;

                                printf("Please enter the operation (+, -, *, /, %%, P, X, I):\n");      //shows the user the operations and asks the user to enter operation.
                                getchar();
                                scanf("%c", &calc1);
                                while ((calc1 != '+') && (calc1 != '-') && (calc1 != '*') && (calc1 != '/') && (calc1 != '%') && ((calc1 != 'P') && (calc1 != 'p')) && ((calc1 != 'X') && (calc1 != 'x')) && ((calc1 != 'I') && (calc1 != 'i'))){
                                    printf("Not the operation listed above\n\n");       //prints an invalid error message to the user.
                                    printf("Please enter the operation (+, -, *, /, %%, P, X, I):\n");      //shows the user the operations and asks the user to enter operation.
                                    getchar();
                                    scanf("%c", &calc1);
                                }

                                printf("Please enter the second number or (a, b, c, d, e):\n");     //asks the user to enter a number or any variable within (a, b, c, d, e).
                                while(!logic){
                                    if(scanf("%f", &y)){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        logic = 1;
                                    }else if ((scanf("%c", &var) == 1) && (var >= 'a') && (var <= 'e')){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        if(var == alpha){
                                            y = num;
                                        }else{
                                            y = 0;
                                        }
                                        logic = 1;
                                    }else{
                                        puts("Error, please enter a valid input: ");        //prints an invalid error message to the user.
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                    }
                                }
                                logic = 0;

                                switch(calc1){
                                    case '+':
                                        result = x + y;     //executes the operation.
                                        printf("The result is %.2f.\n", result);        //prints the result.
                                        break;

                                    case '-':
                                        result = x - y;     //executes the operation.
                                        printf("The result is %.2f.\n", result);        //prints the result.
                                        break;

                                    case '*':
                                        result = x * y;     //executes the operation.
                                        printf("The result is %.2f.\n", result);        //prints the result.
                                        break;

                                    case '/':
                                        if (y != 0){
                                            result = x / y;     //executes the operation.
                                            printf("The result is %.2f.\n", result);        //prints the result.
                                        }else{
                                            printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                        }
                                        break;

                                    case '%':
                                        if (y != 0){
                                            result = (int)x % (int)y;       //executes the operation.
                                            printf("The result is %.0f.\n", result);        //prints the result.
                                        }else{
                                            printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                        }
                                        break;

                                    case 'P':
                                    case 'p':
                                        result = pow (x, y);        //executes the operation.
                                        printf("The result is %.2f.\n", result);        //prints the result.
                                        break;

                                    case 'X':
                                    case 'x':
                                        if (x > y){
                                            printf("The result is %.2f.\n", x);     //prints first number if it's greater than second number.
                                        }else{
                                            printf("The result is %.2f.\n", y);     //prints second number if it's greater than first number.
                                        }
                                        break;

                                    case 'I':
                                    case 'i':
                                        if (x < y){
                                            printf("The result is %.2f.\n", x);     //prints first number if it's less than second number.
                                        }else{
                                            printf("The result is %.2f.\n", y);     //prints second number if it's less than first number.
                                        }
                                        break;
                                }
                                printf("Please select your option (B, U, E):\n");       //shows the user the operations and asks the user to enter an operation.
                                scanf("%c", &opt1);
                                break;

                            case 'U':
                            case 'u':

                                printf("Please enter the operation (S, L, E, C, F):\n");        //shows the user the operations and asks the user to enter operation.
                                getchar();
                                scanf("%c", &calc2);
                                getchar();

                                while (((calc2 != 'S') && (calc2 != 's')) && ((calc2 != 'L') && (calc2 != 'l')) && ((calc2 != 'E') && (calc2 != 'e')) && ((calc2 != 'C') && (calc2 != 'c')) && ((calc2 != 'F') && (calc2 != 'f'))){
                                    printf("Not the operation listed above\n");       //prints an invalid error message to the user.
                                    printf("Please enter the operation (S, L, E, C, F):\n");        //shows the user the operations and asks the user to enter operation.                    
                                    getchar();
                                    scanf("%c", &calc2);
                                    getchar();
                                }
                                printf("Please enter the number or (a, b, c, d, e):\n");        //asks the user to enter a number or any variable within (a, b, c, d, e).
                                while(!logic){
                                    if(scanf("%f", &x)){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        logic = 1;
                                    }else if ((scanf("%c", &var) == 1) && (var >= 'a') && (var <= 'e')){
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                        if(var == alpha){
                                            x = num;
                                        }else{
                                            x = 0;
                                        }
                                        logic = 1;
                                    }else{
                                        puts("Error, please enter a valid input: ");        //prints an invalid error message to the user.
                                        scanf("%[^\n]s", &del);     //discards the scanned value.
                                    }
                                }
                                logic = 0;

                                switch(calc2){
                                    case 'S':
                                    case 's':
                                        while (x < 0){
                                            printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                            printf("Please enter the number:\n");       //asks the user to enter the number.
                                            scanf("%f", &x);
                                        }
                                        result = sqrt (x);      //executes the operation.
                                        printf("The result is %.2f.\n", result);        //prints the result.
                                        break;

                                    case 'L':
                                    case 'l':
                                        while (x < 0){
                                            printf("Syntax Error!!!\n");        //prints an invalid error message to the user.
                                            printf("Please enter the number:\n");       //asks the user to enter the number.
                                            scanf("%f", &x);
                                        }

                                        printf("Enter: \n1. log(x) \n2. ln(x)\n");      //shows the user the operations and asks the user to enter an operation.
                                        scanf("%d", &select);

                                        while((select != 1) && (select != 2)){      //loop to check whether the number entered is the correct input.
                                            scanf("%[^\n]s", &del);     //discards the scanned value.
                                            printf("Not the operation listed above\n");       //prints an invalid error message to the user.
                                            printf("Enter: \n1. log(x) \n2. ln(x)\n");      //shows the user the operations and asks the user to enter operation.
                                            scanf("%d", &select);
                                        }
                        
                                        if (select == 1){
                                            result = log10 (x);       //executes the operation.
                                        }else{
                                            result = log (x);        //executes the operation.
                                        }

                                        printf("The result is %.4f.\n", result);        //prints the result.
                                        break;

                                    case 'E':
                                    case 'e':
                                        result = exp (x);       //executes the operation.
                                        printf("The result is %.4f.\n", result);        //prints the result.
                                        break;

                                    case 'C':
                                    case 'c':
                                        result = ceil (x);      //executes the operation.
                                        printf("The result is %.0f.\n", result);        //prints the result.
                                        break;

                                    case 'F':
                                    case 'f':
                                        result = floor (x);     //executes the operation.
                                        printf("The result is %.0f.\n", result);        //prints the result.
                                        break;
                                }
                                printf("Please select your option (B, U, E):\n");       //shows the user the operations and asks the user to enter operation.
                                scanf("%c", &opt1);

                            case 'E':
                            case 'e':
                                break;      //exits the loop.
                        }
                    }
                    printf("Please select your option (B, U, A, V, E):\n");     //shows the user the operations and asks the user to enter operation.
                    scanf("%c", &opt);
                    break;


                case 'E':
                case 'e':
                    break;      //exits the loop.
        }
    }
    printf("Thanks for using my simple Calculator. Hope to see you soon again. Goodbye!\n");        //shows a goodbye message to the user.
    return 0;       //end.
}

