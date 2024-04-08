#include "stdio.h"


int main(){
    int number = 25;
    int octal = 0;
    int ocalList[sizeof(number)];
    for (int i=0; i<sizeof(number); i++){
        octal = number % 8;
        number = number / 8;
        ocalList[i] = octal;
        printf("%i \n", octal);
    }
    return 0;



}