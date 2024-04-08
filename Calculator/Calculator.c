#include "stdio.h"

int main(){
    int Num1 = 0;
    int Num2 = 0;
    char Operator;
    printf("Enter your Calculation (1 + 1), (5 - 4) or smth\n");
    scanf("%i %c %i \n", &Num1, &Operator, &Num2);

    switch(Operator){
        case '+': 
            printf("%i \n", Num1+Num2);
            break;
        case '-' :
            printf("%i \n", Num1-Num2);
            break;
        case '*':
            printf("%i \n", Num1*Num2);
            break;
        case '/':
            printf("%i \n", Num1/Num2);
            break;
        case '%':
            printf("%i \n", Num1%Num2);
            break;
    }
    return 0;
}
