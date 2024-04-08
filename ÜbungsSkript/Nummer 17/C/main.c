#include "stdio.h"


int main(){
    int number = 25;
    int hex = 0;
    char hexList[1];
    for (int i=0; i<sizeof(number); i++){
        hex = number % 16;
        number = number / 16;
        switch(number){
            case 10:
                hexList[i] = 'A';
            case 11:
                hexList[i] = 'B';
            case 12:
                hexList[i] = 'C';
            case 13:
                hexList[i] = 'D';
            case 14:
                hexList[i] = 'E';
            case 15:
                hexList[i] = 'F';
        }
        if (number <= 9){
            hexList[i] = hex;
        }
        printf("%i", hex);
    }
    int length = sizeof(hexList)/sizeof(hexList[0]);
    for (int i=length-1; i>=0; i--){
        printf("%d", hexList[i]);  
    }
    return 0;



}