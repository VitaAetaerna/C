#include "stdio.h"


int main(){

    //Deklariere Variablen
    int decNumber = 0;
    //Fragt nach einer Zahl
    printf("Enter a positive Number: ");
    scanf("%i", &decNumber);

    //Gebe die Binärzahl aus
    int binaryNumber[8] = {1,1,1,1,1,1,1,1};
    printf("%i \n", binaryNumber);
    for (int i=0; i<8; i++){
        printf("%i %i %i \n", decNumber, binaryNumber, i);
        binaryNumber[i] = decNumber % 2;
        decNumber = decNumber / 2;
        printf("Stelle %i ist %i \n", i, binaryNumber);

    printf("Die Binaer Zahl von %i ist %d", decNumber, binaryNumber);

}


    return 0;
}