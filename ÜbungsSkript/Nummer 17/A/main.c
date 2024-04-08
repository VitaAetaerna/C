#include "stdio.h"

int BinaryCalc(int DezZahl){
    int binaryNumber[8];
    printf("%i", sizeof(binaryNumber));
    for (int i=0; i<8; i++){
        binaryNumber[i] = DezZahl % 2;
        DezZahl = DezZahl / 2;
        printf("Die Stelle %i der Zahl %i ist %d \n", i,DezZahl,binaryNumber[i]);
    }

    return 0;
    
}

int main(){
    int DezZahl = 0;

    printf("Gib eine Zahl ein an: ");
    scanf("%i", &DezZahl);

    BinaryCalc(DezZahl);
    return 0;

}